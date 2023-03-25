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
    // ~Node()
    // {
    //     int val = this->data;
    //     if (this->next != NULL)
    //     {
    //         delete next;
    //         this->next = NULL;
    //     }
    //     cout << "Your duplicate data is remove for = " << val << endl;
    // }
};
void insertH(Node *&head, int d)

{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
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
Node *remove1(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {

        if ((temp->next != NULL) && temp->data == temp->next->data)
        {
            Node* next_next = temp->next->next;
            Node* del = temp -> next;
               delete del;
            temp->next = next_next;
         
        }
        else
            temp = temp->next;
    }
    return head;
}

int main()
{
    Node *head = new Node(10);

    insertH(head, 2);
    insertH(head, 1);
    insertH(head, 1);
    insertH(head, 34);
    insertH(head, 34);
    print(head);
    cout << endl;

    remove1(head);

    print(head);

    return 0;
}