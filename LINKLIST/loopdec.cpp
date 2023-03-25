#include <climits>
 #include <iostream>

using namespace std;

class Node
{
 
public:
int data;
Node* next;


    Node( int data){
    this -> data =  data;
    this ->next = NULL;}
     
};void insertH(Node* &head, int d)
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


 void loop_dect(Node *&head)
 {
    Node* fast = head ;
    Node * slow = head;

    while (fast != NULL && slow != NULL)
    {
        fast = fast -> next;
        if (fast!= NULL){
            fast = fast->next;
        }
        slow = slow -> next;
    }

    if (fast == slow){
        cout<<"LOOP IS PRESENT"<<endl;
    }
    else
    {
      cout<< "LOOP IS ABSENT"<< endl;
        }
    
    
    
 }
int main () {

    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    insertH(head,13);
    insertH(head,177);
    insertH(head,3);
    insertH(head,12);
    print(head);
    loop_dect(head);
  
   return 0;
}