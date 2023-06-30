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
//         ListNode* deleteDuplicates(ListNode* head) {

//         if(head==NULL) return head;
//         ListNode * temp = head;

//         while(temp->next != NULL) //head null thakle eta null er next korte jaia error khabe tai oi case age alada vabe handle krte hbe
//         {
//             if(temp->val==temp->next->val)
//             {
//                 temp->next = temp->next->next;
//             }

//             if(temp->next==NULL) break;
//             else if(temp->val!=temp->next->val) temp = temp->next;
//         }

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
// //         ListNode* deleteDuplicates(ListNode* head) {
// //          ListNode *temp = head;
// //         if(head==NULL) return head;

// //         while(temp->next != NULL)
// //         {
// //             if(temp->val==temp->next->val) temp->next = temp->next->next;

// //             if(temp->next==NULL) return head;
// //             else if(temp->val != temp->next->val) temp = temp->next;
// //         }
// //         return head;
// //     }
        
// // };







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
// //         ListNode* deleteDuplicates(ListNode* head) {
// //         ListNode * temp = head;
// //         if(head==NULL) return head;

// //         while(temp->next != NULL)
// //         {
// //             if(temp->val==temp->next->val)
// //             {
// //                 ListNode * delete_node = temp->next;
// //                 temp->next = temp->next->next;
// //                 delete delete_node;
// //             }

// //             if(temp->next==NULL) break;
// //             else if(temp->val!=temp->next->val) temp = temp->next;
// //         }

// //         return head;

// //     }
// // };