// //problem from leetcode;


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

//     ListNode* middleNode(ListNode* head) {
//         ListNode * slow = head;
//          ListNode * fast = head;
//         while(fast != NULL && fast->next != NULL)
//         {
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         cout <<"My : "<< slow->val<< endl; //eta print krle somossa nai, ora eta output  hisebe nibe na, karon ora return onujayi thik ase naki dekhbe
//         return slow;
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

// //     int size(ListNode * head)
// //     {
// //         ListNode * temp = head;
// //         int cnt=0;
// //         while(temp !=NULL)
// //         {
// //             cnt++;
// //             temp = temp->next;
// //         }
// //         return cnt;
// //     }
// //     ListNode* middleNode(ListNode* head) {
// //         int n = size(head);
// //         ListNode * temp = head;
// //         for(int i=0;i<n/2;i++)
// //         {
// //             temp = temp->next;
// //         }
// //         return temp;
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

// //     int size(ListNode * head)
// //     {
// //         ListNode * temp = head;
// //         int cnt=0;
// //         while(temp !=NULL)
// //         {
// //             cnt++;
// //             temp = temp->next;
// //         }
// //         return cnt;
// //     }
// //     ListNode* middleNode(ListNode* head) {
// //         int n = size(head);
// //         ListNode * temp = head;
// //         for(int i=1;i<=n/2;i++)
// //         {
// //             temp = temp->next;
// //         }
// //         return temp;
// //     }
// // };