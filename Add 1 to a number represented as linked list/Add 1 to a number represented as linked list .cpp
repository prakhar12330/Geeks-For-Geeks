
/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    
    Node* reverseLL(Node* head)
    {
        Node* prv=NULL;
        Node* nxt=NULL;
        Node* crnt=head;
        while(crnt!=NULL)
        {
            nxt=crnt->next;
            crnt->next=prv;
            prv=crnt;
            crnt=nxt;
        }
        return prv;
    }
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        Node* new_head=reverseLL(head);
        Node* prv=NULL;
        Node* crnt=new_head;
        Node* crnt1=new_head;
        
        int crry=0;
        while(crnt!=NULL)
        {
            int sum=0;
            if(prv==NULL)
            {
                sum=crnt->data+1;
            }
            else
            {
                sum=crnt->data+crry;
            }
            crry=sum/10;
            crnt->data=sum%10;
            prv=crnt;
            crnt=crnt->next;
        }
        if(crry)
        {
            Node* new_node=new Node(crry);
            prv->next=new_node;
        }
        return reverseLL(crnt1);
        
    }
};
