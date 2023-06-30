#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;
    b->next = head; // ei line er maddhome amra tail er sathe head connect korechi and list take cylick korechi.
   // ei line ta na dile list ta cyclik hobe na and outpush ashbe No Cycle.


    Node * slow = head; //slow and first or hair and tortoise algorithm
    Node * fast = head;

    bool flag = false;
    //eitar complexity O(N)
    while (fast != NULL && fast->next != NULL) // && er khetre bam pasher condtion false hole dan pasher ta r check e kre na tai error khacce na oi condition eu jokhon bam pasher ta false                                              
    {                                           //naile fast == null hoile fast->next access krte gele error khaito kintu ekhon jehetu bam pasher ta false hoile dane r check e kre na  tai problem nai, 
                                                //condtion duita ultay dile mane ager ta pore r porer ta age dile problem hoilo       
        
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast)                        
        {
            flag = true;
            break;
        }                                        
    }

    if(flag == true) cout << "Cycle is detected\n";
    else cout << "No cycle\n";
    
   
    return 0;
}




//--------------------------------------------------------------------------------------------



// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int val;
//     Node *next;

//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// int main()
// {
//     Node *head = new Node(10);
//     Node *a = new Node(20);
//     Node *b = new Node(30);
//     Node *c = new Node(40);

//     head->next = a;
//     a->next = b;
//     b->next = c;
//     c->next = a; // ei line er maddhome amra tail er sathe a connect korechi and list take cylick korechi.
//    // ei line ta na dile list ta cyclik hobe na and outpush ashbe No Cycle.

//     //c->next = NULL; dile no cylce

    // Node * slow = head;
    // Node * fast = head;

//     bool flag = false;

//     while (fast != NULL && fast->next != NULL) // && er khetre bam pasher condtion false hole dan pasher ta r check e kre na tai error khacce na oi condition eu jokhon bam pasher ta false                                              
//     {                                           //naile fast == null hoile fast->next access krte gele error khaito kintu ekhon jehetu bam pasher ta false hoile dane r check e kre na  tai problem nai, 
//                                                 //condtion duita ultay dile mane ager ta pore r porer ta age dile problem hoilo       
        
//         slow = slow->next;
//         fast = fast->next->next;

//         if(slow == fast)                        
//         {
//             flag = true;
//             break;
//         }                                        
//     }

//     if(flag == true) cout << "Cycle is detected\n";
//     else cout << "No cycle\n";
    
   
//     return 0;
// }