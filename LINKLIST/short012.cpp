#include <climits>
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *pre;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->pre = NULL;
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
{
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
void insert(Node *head)
{
    Node *temp = head;
    int zero = 0;
    int first = 0;
    int sec = 0;
    while (temp)
    {
        if (temp->data == 0)
            zero++;
        else if (temp->data == 1)
            first++;
        else
            sec++;
        temp = temp->next;
    }
    while (zero--)
    {
        head->data = 0;
        head = head->next;
    }
        while (first--)
    {
        head->data = 1;
        head = head->next;
    }
        while (sec--)
    {
        head->data = 2;
        head = head->next;
    }
    
}

int main()
{
    Node *head = new Node(0);
    insertH(head,1 );
    insertH(head, 1);
    insertH(head, 2);
    insertH(head, 2);
    insertH(head, 0);
    insertH(head, 2);
   insert(head);
    print(head);
    return 0;
}