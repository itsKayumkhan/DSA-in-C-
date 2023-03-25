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
Node *swap_pair(Node *head)
{
    Node *prev = head;
    Node *cur = head->next->next;
    head = head->next;
    head -> next = prev;
    if (head == NULL and head->next== NULL)
    {
        return head;
    }
    
    while (prev != NULL and prev->next != NULL)
    {
        prev->next = cur->next;
        prev = cur;
        Node*temp = cur->next->next;
        cur->next->next = cur;
        cur = temp;
    }

    //   Node* nex = temp ->next;
    //   while (nex)
    //   {  Node* prev;
    //     prev ->data = temp ->data;
    //     temp ->data = nex->data;
    //     nex ->data = prev->data;
    //     temp = nex ->next;
    //     nex = temp->next;
    //   }
    prev->next= cur;
    return head;
}

int main()
{
    Node *head = new Node(6);

    insertH(head, 5);
    insertH(head, 4);
    insertH(head, 3);
    insertH(head, 2);
    insertH(head, 1);
    // print(head);
    // cout<< endl<<endl;
    swap_pair(head);
    print(head);
    return 0;
}