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
    ~Node()
    {
        int val = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "The memory is free for = " << val;
    }
};
void insertH(Node *&head, Node *&tail, int d)
{
    Node *temp = new Node(d);

    if (head == NULL)
    {

        head = temp;
        tail = temp;
    }
    temp->next = head->next;
    head->per = temp;
    temp->per = NULL;
    head = temp;
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
{
    Node *head = NULL;
    Node *tail = NULL;
    insertH(head, tail, 45);
    print(head);
    insertH(head, tail, 6);
    print(head);

    insertH(head, tail, 40);
    print(head);

    insertH(head, tail, 0);
    print(head);

    insertH(head, tail, 5);

    print(head);

    return 0;
}