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
//     int size(ListNode *head)
//     {
//         int cnt=0;
//         while(head !=NULL)
//         {
//             cnt++;
//             head = head->next;
//         }
//         return cnt;
//     }

//     void swap_elements(ListNode *head,int front_i,int back_i)
//     {
//         ListNode * temp1=head;
//         ListNode * temp2=head;
//         for(int i=1;i<=front_i;i++)
//         {
//             temp1 = temp1->next;
//         }
//         for(int i=1;i<=back_i;i++)
//         {
//             temp2 = temp2->next;
//         }

//         swap(temp1->val,temp2->val);
//     }

//     ListNode* swapNodes(ListNode* head, int k) {
//         int back_i = size(head)-k;
//         int front_i = k-1;
//         swap_elements(head,front_i,back_i);
//         return head;
//     }
// };








// // /**
// //  * Definition for singly-linked list.
// //  * struct ListNode {
// //  *     int val;
// //  *     ListNode *next;
// //  *     ListNode() : val(0), next(nullptr) {}
// //  *     ListNode(int x) : val(x), next(nullptr) {}
// //  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
// //  * };
// //  */
// // class Solution {
// // public:
// //     int size(ListNode *head)
// //     {
// //         int cnt=0;
// //         while(head !=NULL)
// //         {
// //             cnt++;
// //             head = head->next;
// //         }
// //         return cnt;
// //     }
// //     ListNode* swapNodes(ListNode* head, int k) {
// //         int back_i = size(head)-k;
// //         int front_i = k-1;
// //         ListNode * temp1=head;
// //         ListNode * temp2=head;
// //         for(int i=1;i<=front_i;i++)
// //         {
// //             temp1 = temp1->next;
// //         }
// //         for(int i=1;i<=back_i;i++)
// //         {
// //             temp2 = temp2->next;
// //         }
 
// //         swap(temp1->val,temp2->val);
// //         return head;
// //     }
// // };