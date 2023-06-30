// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     void insert_tail(ListNode *&myhead,ListNode *&mytail,long long val)
//     {
//         ListNode *NewNode = new ListNode(val);
//         if(myhead==NULL)
//         {
//             myhead = NewNode;
//             mytail = NewNode;
//             return;
//         }
//         mytail->next = NewNode;
//         mytail = NewNode;
//     }
//     ListNode* mergeNodes(ListNode* head) {
//         ListNode * myhead =NULL;
//         ListNode * mytail =NULL;
//         ListNode *temp = head->next;
//         long long sum = 0;
//         while(temp != NULL)
//         {
//             if(temp->val==0)
//             {
//                  insert_tail(myhead,mytail,sum);
//                  sum = 0;
//             }
//             else sum += temp->val;

//             temp = temp->next;
//         }
//         return myhead;
//     }
// };