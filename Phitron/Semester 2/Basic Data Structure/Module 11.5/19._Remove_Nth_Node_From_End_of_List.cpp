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
//    public: 
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
//     void delete_at_any(ListNode *&head,int val){
        
//         if(val==0)
//         {
//             ListNode * tmp1 = head;
//             head = head->next;
//             delete tmp1;
//             return;
//         }
     
//         ListNode *temp = head;
//         for(int i=1;i<=val-1;i++)
//         {
//             temp = temp->next;
//         }
        
//         ListNode *deleteNode = temp->next;
//         temp->next = temp->next->next;
//         delete deleteNode;
        
//     }

//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         int val = size(head)-n;
//         delete_at_any(head,val);
//         return head;
//     }
// };