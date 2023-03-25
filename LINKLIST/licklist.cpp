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
        int val = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Your memory is remove for = " << val << endl;
        ;
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
    tail = temp;
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

void deleteNode(Node* &head, int p)
{
    if (p == 1)

    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    Node *cur = head;
    Node *per = NULL;
    int c = 1;
    while (c < p)
    {
        per = cur;
        cur = cur->next;
        c++;
    }
    per->next = cur->next;
    cur->next = NULL;
    delete cur;
}
void anyP(Node* &head, Node* &tail, int p, int d)
{
    Node *temp = head;
    int c = 1;
    if (p == 1)
    {
        insertH(head, d);
        return;
    }

    while (c < p-1)
    {
        temp = temp->next;
        c++;
    }

    if (temp->next == NULL)
    {
        insertT(tail, d);
        return;
    }

    Node *newNode = new Node(d);
    newNode->next = temp->next;
    temp->next = newNode;
}
int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    insertH(head, 100);
    insertH(head, 13);
    insertH(head, 40);
    insertT(tail, 23);
    insertT(tail, 2);
    insertT(tail, 43);
    print(head);
    cout << endl;
    anyP(head, tail, 3, 12);
    print(head);

    return 0;
}