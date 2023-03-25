#include <climits>
 #include <iostream>
using namespace std;

  
class Node
{
 
public:
int data;
Node* next;
int flag;


    Node( int data){
    this -> data =  data;
    this ->next = NULL;
    this -> flag = 0;
    }
     
};void insertH(Node* &head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
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
int loop_dec(Node* head)

{
      Node* temp = head;
      while (temp != NULL)
      {
        if(temp->flag == 1)
        return true;

        temp -> flag = 1;
        temp = temp -> next;
      }
      return false;
}

int main () {

    Node* node1 = new Node(10);
    Node* head = node1;
   

    insertH(head,13);
    insertH(head,177);
    insertH(head,3);
    insertH(head,12); 
    print(head);
   loop_dec(head)? cout<<"FOUND": cout<<"NOT FOUND";
  
   return 0;
}
 