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
void insertT(Node *&head, Node *&tail, int d)
{
    Node *temp = new Node(d);
    if (head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        tail->next = temp;
        tail = tail->next;
    }
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
    Node *temp = head;
    Node *prev = NULL;
    Node *forward = NULL;

    while (temp != NULL)
    {
        forward = temp->next;
        temp->next = prev;
        prev = temp;
        temp = forward;
    }
    return prev;
}
Node *add(Node *head1, Node *head2)
{
    Node *head = NULL;
    Node *tail = NULL;
   int carry=0;
    while (head1 != NULL or head2 != NULL or carry != 0)
    {   int val1= 0;
    int val2=0;
        if (head1 != NULL)
            val1 = head1->data;
        if (head2 != NULL)
            val2 = head2->data;

      int  sum = carry + val1 + val2;
      int  digit = sum % 10;
        insertT(head, tail, digit);
        carry = sum / 10;
        if (head1 != NULL)
            head1 = head1->next;
        if (head2 != NULL)
            head2 = head2->next;
    }
    return head;
}
Node *addLL(Node *head1, Node *head2)
{
    head1 = revers(head1);
    head2 = revers(head2);

    Node *ans = add(head1, head2);

    return ans;
}

int main()
{
    Node *head1 = new Node(2);
    Node *tail1 = NULL;
    Node *head2 = new Node(2);
    Node *tail2 = NULL;
   
     
    insertH( head2, 9);
    insertH( head2, 9);
  

    print(head1);
    cout << endl;
    print(head2);
    cout << endl;

    Node *ans = addLL(head1, head2);
    print(ans);
    return 0;
}