#include <climits>
 #include <iostream>
using namespace std;
class Node
{
public:
int data;
Node* next;
    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;

    }
  
 
};

void insertH(Node*& head , int d)
{
   if( head == NULL)
   {
      Node *temp = new Node(d);
      head = temp;
   }
   else{
    Node* temp =  new Node(d); 
     temp -> next = head;
     head = temp;
   }
}
void insertT(Node* tail, int d )

{if (tail == NULL)
{
    insertH(tail,d);

}else{
  Node* temp = new  Node(d);
  tail -> next = temp;
  tail = tail -> next ;

}
}
void print (Node * head)

{
    Node * temp = head;
    while(temp)
    {
        cout << temp->data<< endl;
        temp = temp->next;
    }
}
int getLen(Node* &head)
{
    Node* temp = head;
    int c= 1;
    while(temp)
    {
        c++;
        temp = temp->next;
    } 
    return c;
}

int sumLNnode(Node* head , int d)
{   Node* temp = head;
    int len = getLen(head);
    len =abs( len - d);
    int c=1;
    while(c < len)
     {
        temp = temp -> next ;
        c++;

    }
    int sum = 0;
    while( temp !=NULL)
    {
       sum += temp-> data;
       temp = temp -> next;
    }
return sum;
    

}
int main () {
    Node* head = new Node(10);
  insertH(head,23);
  insertH(head,26);
  insertH(head,21);
  insertH(head,223);
  insertH(head,3);
  insertH(head,2);
 
print(head);
cout<<endl<<sumLNnode(head,3);

   return 0;
}