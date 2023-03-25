#include <climits>
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *per;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->per = NULL;
    }
};
void insertT(Node *&tail, int d)
{
    Node *temp = new Node(d);
    //   if (tail == NULL)
    //   {
    //     tail = temp;
    //     head= temp;
    //   }
    tail->next = temp;
    temp->per = tail;
    tail = temp;
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " " << endl;
        temp = temp->next;
    }
}

int main()
{  Node* node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    insertT(tail, 76);
 
    insertT(tail, 54);
   
    insertT(tail, 7);
     
    insertT(tail, 6);
    print(head);

    return 0;
}