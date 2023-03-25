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
};
void insertH(Node *&head, int d)
{
    Node *temp = new Node(d);
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        temp->next = head;
        head = temp;
    }
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
Node *get_mid(Node *head)
{    Node *slow = head;
    Node *fast = head->next;
  
    while (fast !=NULL and fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
Node *revers(Node *head)
{
    Node *prev = NULL;
    Node *next = NULL;
    Node *curr = head;

    while (curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
int Palindrome(Node *&head)
{

if(head->next == NULL)
return true;

    Node *mid = get_mid(head);
    Node *first = head;
    Node *last = mid->next;
    mid->next = revers(last);
   Node* curr =mid ->next;
    while (curr !=NULL)
    {
        if ( first->data!=curr->data )
            return false;

        curr = curr->next;
        first = first->next;
    }

    return true;
}

int main()
{
    Node *head = new Node(12);
    insertH(head, 1);
    insertH(head, 64);
    insertH(head, 13);
    insertH(head, 12);

    Palindrome(head)? cout<<"yes":cout<<"No";

    return 0;
}