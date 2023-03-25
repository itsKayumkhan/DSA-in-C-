#include <climits>
 #include <iostream>
using namespace std;
class Node
{
public:
int data;
Node*next;
Node* pre;

    Node(int data){
        this->data=data;
        this->next = NULL;
        this->pre=NULL;
    }
    ~Node(){
        if(this->next !=NULL)
        {
           delete next;
           this ->next = NULL;
        }
    }
 
};
 
   void insertH(Node* &head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void insertT(Node* &tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

void print(Node* &head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}
Node* sortedMerge(Node* head1, Node* head2)
{
      Node* result = NULL; 
    
 
    if (head1 == NULL) 
        return(head2); 
    else if (head2 == NULL) 
        return(head1); 
    
    
    if (head1->data <= head2->data) 
    { 
        result = head1; 
        result->next = sortedMerge(head1->next, head2); 
    } 
    else
    { 
        result = head2; 
        result->next = sortedMerge(head1, head2->next); 
    } 
    return(result);
       
}
 