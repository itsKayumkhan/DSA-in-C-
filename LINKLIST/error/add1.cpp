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
Node *revers(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
       return head;
    }

    Node *per = NULL;
    Node *cur = head;
    Node *forward = NULL;

    while (cur != NULL)
    {
        forward = cur->next;
        cur->next = per;
        per = cur;
        cur = forward;
    }
    cout << endl;
    return per;
}
Node *add1(Node *head)
{
    head = revers(head);
    Node *temp = head;

    while (temp)
    {
        if (temp->next == NULL and temp->data == 9)
        {
            temp->data = 1;
            
            insertH(head,0 );
            temp = temp->next;
        }
        else if (temp->data == 9)
        {
            temp->data = 0;
            temp = temp->next;
        }
        else
        {
            temp->data = temp->data + 1;
            temp= temp->next;
            break;
        }
    }
   head = revers(head);
    return head;
}
int main()
{
    Node *head = new Node(9);
    
    
    

    Node *ans = add1(head);
    print(ans);
    return 0;
}