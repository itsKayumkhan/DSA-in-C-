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

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}
Node *remove_odd(Node *head)
{
    Node *pre = NULL;
    
    Node *temp = head;
    if (temp == NULL)
    {
        return 0;
    }
    if (head->data % 2 != 0)
    {
        Node *temp = head;
        head = head->next;

        temp->next = NULL;
        delete temp;
    }
    temp = head;
    while (temp != NULL)
    {
        if (temp->data % 2 != 0)
        {

            pre->next = temp->next;
            temp->next = NULL;
            delete temp;
        }
        temp = temp->next;
    }
    return pre;
}
int main()
{
    Node *head = new Node(1);
    insertH(head, 23);
    insertH(head, 23);
    insertH(head, 20);
    insertH(head, 22);
    insertH(head, 3);
    insertH(head, 2);

    remove_odd(head);
    cout << endl;
    print(head);

    return 0;
}