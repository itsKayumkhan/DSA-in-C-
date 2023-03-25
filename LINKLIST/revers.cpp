#include <climits>
#include <iostream>

using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node* per;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->per = NULL;
    }
};

// void insertH(Node *&head, Node *&tail, int d)
// {
//     if (head == NULL)
//     {
//         Node *temp = new Node(d);
//         head = temp;
//         tail = temp;
//     }
//     else
//     {

//         Node *temp = new Node(d);
//         temp->next = head;
//         head = temp;
//     }
// }

void insertT(Node *&tail, int d)
{
    Node *temp = new Node(d);
    
    tail->next = temp;
    temp->per = tail;
    tail = temp;
}
// void anyP(Node *&head, Node *&tail, int p, int d)
// {
//     Node *temp = head;
//     int c = 1;
//     if (p == 1)
//     {
//         insertH(head, tail, d);
//         return;
//     }

//     while (c < p - 1)
//     {
//         temp = temp->next;
//         c++;
//     }

//     if (temp->next == NULL)
//     {
//         insertT(head, tail, d);
//         return;
//     }

//     Node *newNode = new Node(d);
//     newNode->next = temp->next;
//     temp->next = newNode;
// }
void print(Node *&tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->data << " " << endl;
        temp = temp->next;
    }
}
void revers(Node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        cout << "1 NO. ONLY IN LIST" << endl;
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
    print(per);
 
}
// by recursion

// Node *reversS(Node *head)
// {
//     if (head == NULL or head->next == NULL)
//         return head;

//     Node *newN = reversS(head->next);
//     Node *temp = head->next;
//     temp->next = head;
//     head->next = NULL;
//     return newN;
// }
int main()
{
    Node *node = new Node(1);
    Node *head = node;
    Node *tail = node;

 
     insertT(tail,2);
     insertT(tail,3);
     insertT(tail,9);
     insertT(tail,6);
 
    print(head);

    // revers(head);
    // print(head);

    revers(head);
 
    return 0;
}