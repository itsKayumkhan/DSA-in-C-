#include <climits>
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;


    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        
    }
    ~Node()
    {
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};

void insertH(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void insertT(Node *&tail, int d)
{  if(tail == NULL) 
{
    Node *temp = new Node(d);
    tail = temp;
}
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}
void mergeShortLnkList(Node *head1, Node *head2)
{
   
    Node* first = head1;
    Node *temp = NULL;
    Node *second = head2;
    while (head1 or second)
    {
        if (head1->data > second->data)
       {    temp =second;
       print(temp);
       cout<<endl;
        second = second->next;
       }
       else{
        temp=head1;
               print(temp);
                      cout<<endl;


        head1=head1->next;
       }
       temp =temp -> next;
    }
    print(temp->next);
}

int main()
{
    Node *head1 = new Node(10);
  
    insertT(head1, 223);
    insertT(head1, 3);
    insertT(head1, 2);
  Node *head2 = new Node(10);
    insertT(head2, 23);
    insertT(head2, 26);
    insertT(head2, 21);
   mergeShortLnkList(head1,head2);

    return 0;
}