#include <climits>
 #include <iostream>
using namespace std;
class Node
{
 
public:
int data;
Node*next;

    Node(int data ){
        this -> data= data;
        this-> next= NULL;
    }
     
};

void insertT(Node* &head,Node* &tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
    tail ->next = head;
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
int kill(Node * head,Node*k){
    Node* n = head;
   if (head == 0)
   {
    return 1;
   }
   
   int ans = (kill((n-1) , k) + k)%n;
   return ans;
   
}
 
int main () {
    Node* head = new Node(20);
    Node*tail = new Node(122);
    Node* k = new Node(3);
    insertT(head ,tail,13);
    insertT(head ,tail,2);
    insertT(head ,tail,3);

    kill(head,k);
   return 0;
}