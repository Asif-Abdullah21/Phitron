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
  
//     void insert_tail(ListNode *&myHead,ListNode *&myTail,int val)
//     {
//         ListNode * NewNode = new ListNode(val);
//         if(myHead==NULL)
//         {
//             myHead = NewNode;
//             myTail = NewNode;
//             return;
//         }
//         myTail->next = NewNode;
//         myTail = myTail->next;//NewNode; // myTail = myTail->next;
//     }

//     void reverse(ListNode *&myHead,ListNode *temp)
//     {
//         if(temp->next==NULL)
//         {
//             myHead = temp;
//             return;
//         }
//         reverse(myHead,temp->next);

//         temp->next->next = temp;
//         temp->next = NULL;
//     }

//     void print(ListNode *head)
//     {
//         while (head !=NULL)
//         {
//             cout << head->val << " ";
//             head = head->next;
//         }
    
        
//     }

//     bool isPalindrome(ListNode* head) {
//         ListNode * myHead = NULL;
//         ListNode * myTail = NULL;

//         ListNode *temp = head;

//         while(temp !=NULL)
//         {
//             insert_tail(myHead,myTail,temp->val);
//             temp = temp->next;
//         }

//         reverse(myHead,myHead);

//         print(myHead);

//         ListNode * temp1 = head;
//         ListNode * temp2 = myHead;

//         while(temp1->next !=NULL) //      while(temp2->next !=NULL)
//         {
//             if(temp1->val != temp2->val) return false;
//             temp1 = temp1->next;
//             temp2 = temp2->next;
//         }
//         return true;
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
  
// //     void insert_tail(ListNode *&myHead,ListNode *&myTail,int val)
// //     {
// //         ListNode * NewNode = new ListNode(val);
// //         if(myHead==NULL)
// //         {
// //             myHead = NewNode;
// //             myTail = NewNode;
// //             return;
// //         }
// //         myTail->next = NewNode;
// //         myTail = myTail->next;//NewNode; // myTail = myTail->next;
// //     }

// //     void reverse(ListNode *&myHead,ListNode *temp)
// //     {
// //         if(temp->next==NULL)
// //         {
// //             myHead = temp;
// //             return;
// //         }
// //         reverse(myHead,temp->next);

// //         temp->next->next = temp;
// //         temp->next = NULL;
// //     }

// //     void print(ListNode *head)
// //     {
// //         while (head !=NULL)
// //         {
// //             cout << head->val << " ";
// //             head = head->next;
// //         }
    
        
// //     }

// //     bool isPalindrome(ListNode* head) {
// //         ListNode * myHead = NULL;
// //         ListNode * myTail = NULL;

// //         ListNode *temp = head;

// //         while(temp !=NULL)
// //         {
// //             insert_tail(myHead,myTail,temp->val);
// //             temp = temp->next;
// //         }

// //         reverse(myHead,myHead);

// //         print(myHead);

// //         //ListNode * temp1 = head;
// //         temp = head;
// //         ListNode * temp2 = myHead;

// //         while(temp->next !=NULL)
// //         {
// //             if(temp->val != temp2->val) return false;
// //             temp = temp->next;
// //             temp2 = temp2->next;
// //         }
// //         return true;
// //     }
// // };