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
//     void print(ListNode *head)
//     {
//         while(head !=NULL)
//         {
//             cout << head->val << ' ';
//             head = head->next;
//         }
//         cout << endl;
//     }
   



// ListNode* removeElements(ListNode* head, int val) {

//     if(head==NULL)
//     {
//         return head;
//     } 

//     ListNode* temp = head;

//     while(temp !=NULL && temp->val==val)
//     {
//         ListNode* del = temp;
//         temp = temp->next;
//         delete del;
//     } 

//     head = temp;

//     print(head);

//     if(head==NULL) return head;

//     while(temp->next !=NULL)
//     {
//         if(temp->next->val==val)
//         {
//             ListNode * delete_node = temp->next;
//             temp->next = temp->next->next;
//             delete delete_node;
//         }
//         else temp = temp->next;
//     }

//     return head;

// }


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
// //     ListNode* removeElements(ListNode* head, int val) {
// //         if(head==NULL)
// //         {
// //             return head;
// //         }

// //         ListNode* tmp=head;
// //         while(tmp!=NULL && tmp->val==val)
// //         {
// //             ListNode* deleteNode=tmp;
// //             head=tmp->next;
// //             tmp=tmp->next;
// //             delete deleteNode;
// //         }
        
// //         if(tmp==NULL)return head;

// //         while(tmp->next!=NULL)
// //         {
// //             if(tmp->next->val==val)
// //             {
// //                 ListNode* deleteNode=tmp->next;
// //                 tmp->next=tmp->next->next;
// //                 delete deleteNode;
// //             }
// //             else tmp=tmp->next;
// //         }
       

// //         return head;
// //     }
// // };