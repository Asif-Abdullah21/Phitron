class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int> q;
        for(int i=1;i<=n;i++) q.push(i);
        int cnt = 0;
        while(q.size()>1)
        {

            int val = q.front();
            q.pop();
            cnt++;
            if(cnt==k) cnt = 0;
            else q.push(val);
        }

        return q.front();
    }
};






// class Solution {
// public:
//     int findTheWinner(int n, int k) {
//         queue<int> q;
//         for(int i=1;i<=n;i++) q.push(i);
//         int temp = k;
//         while(q.size()>1)
//         {

//             int val = q.front();
//             q.pop();
//             temp--;
//             if(temp==0) temp = k;
//             else q.push(val);
//         }

//         return q.front();
//     }
// };