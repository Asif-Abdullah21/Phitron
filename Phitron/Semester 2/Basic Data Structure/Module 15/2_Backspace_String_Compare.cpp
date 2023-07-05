class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1,st2;
        //stack<char> st2;

        for(char ch:s)
        {
            if(ch=='#')
            {
                if(!st1.empty()) st1.pop();
            }
            else st1.push(ch);
        }

        for(char ch:t)
        {
            if(ch=='#')
            {
                if(!st2.empty()) st2.pop();
            }
            else st2.push(ch);
        }

        if(st1==st2) return true; //return st1==st2; // eta true othoba false return krbe
        else return false;
    }
};



//----------------------------------------------------------------------------------




// class Solution {
// public:
//     bool backspaceCompare(string s, string t) {
//         stack<char> st1,st2;
//         //stack<char> st2;

//         for(char ch:s)
//         {
//             if(ch!='#') st1.push(ch);
//             else if(st1.empty()==false) st1.pop();
 
//         }

//         for(char ch:t)
//         {
//             if(ch!='#') st2.push(ch);
//             else if(st2.empty()==false) st2.pop(); // else if a asha manei # chilo
//         }

//         if(st1==st2) return true;
//         else return false;
//     }
// };

