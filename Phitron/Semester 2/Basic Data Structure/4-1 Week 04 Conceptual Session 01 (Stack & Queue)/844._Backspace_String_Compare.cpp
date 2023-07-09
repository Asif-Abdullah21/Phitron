class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> ss,tt;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='#' && !ss.empty()) ss.pop();
            else if(s[i] !='#') ss.push(s[i]);
        }

        for(int i=0;i<t.size();i++)
        {
            if(t[i]=='#' && !tt.empty()) tt.pop();
            else if(t[i] !='#') tt.push(t[i]);
        }

        if(ss.size()!=tt.size()) return false;
        else{
            while(!ss.empty())
            {
                char tmp1,tmp2;
                tmp1 = ss.top();
                tmp2 = tt.top();

                ss.pop();
                tt.pop();

                if(tmp1!=tmp2) return false;
            }

            return true;
        }

    }
};









// class Solution {
// public:
//     bool backspaceCompare(string s, string t) {
//         stack<char> st1,st2;
//         //stack<char> st2;

//         for(char ch:s)
//         {
//             if(ch=='#')
//             {
//                 if(!st1.empty()) st1.pop();
//             }
//             else st1.push(ch);
//         }

//         for(char ch:t)
//         {
//             if(ch=='#')
//             {
//                 if(!st2.empty()) st2.pop();
//             }
//             else st2.push(ch);
//         }

//         return st1==st2;
//     }
// };