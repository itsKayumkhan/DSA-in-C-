#include <climits>
 #include <iostream>
using namespace std;
class Node
{
 
public:
int data;
Node* next;
    Node(int data ){
        this->data=data;
        this -> next = NULL;
        
    }
 
};
 
 
void insertT(Node*& head, Node*& tail, int d)
{
     
    if (head == NULL) {
        Node* newNode = new Node(d);
        head = newNode;
        tail = newNode;
        newNode->next = newNode;
    }
    else {
 
     
        Node* temp = new Node(d);
        temp->next = tail->next;
        tail->next = temp;
        tail = tail->next;
    }

 
  }  


// void print(Node* &head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << endl;
//         temp = temp->next;
//     }
// }
bool find(Node* &head){
    Node* temp = head -> next;
    while (temp !=NULL && temp !=head)
     temp = temp-> next;
     
    return (temp ==head);
    
}
int main () {
 Node* head  =NULL;
  Node* tail  =NULL;
  insertT(head,tail,23);
  insertT(head,tail,23);
  insertT(head,tail,2);
  insertT(head,tail,3);
//   print(head);
  find(head)?cout<<"PRESENT":cout<<"ABSENT";
    
 

   return 0;
}