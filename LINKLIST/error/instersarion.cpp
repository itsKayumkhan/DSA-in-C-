#include <climits>
#include <iostream>
#include <unordered_set>
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

void insertH(Node *&head, Node *&tail, int d)
{
    Node *temp = new Node(d);
    if (head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        temp->next = head;
        head = temp;
    }
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
Node *ans(Node *head1, Node *head2)
{
    unordered_set<int> s;

    Node *temp1 = head1,*temp2 = head2, *head3 = NULL, *temp3 = NULL;

    while (temp2 != NULL)
    {

        s.insert(temp2->data);

        temp2 = temp2->next;
    }

    while (temp1 != NULL)
    {

        if (s.find(temp1->data) != s.end())
        {

            Node *NewNode = new Node(temp1->data);

            if (head3 == NULL)
            {

                head3 = temp3 = NewNode;
            }

            else
            {

                temp3->next = NewNode;

                temp3 = temp3->next;
            }
        }

        temp1 = temp1->next;
    }

    return head3;
}

//     Node *temp1 = head1;
//     Node *temp2 = head2;
//     Node* head =NULL;
//     Node* tail = NULL;
//     unordered_set<int> s;

//     while (temp2 != NULL)
//     {
//         s.insert(temp2->data);
//         temp2 =temp2->next;
//     }
//     while (temp1 != NULL)
//     {
//         if(s.find(temp1->data) != s.end())
//         {
//            insertT(head ,tail,temp1->data);

//            head=head->next;
//         }

//             temp1=temp1->next;

//     }
// print(head);
//     return head;


int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *tail2 = NULL;

    Node *head2 = NULL;
    insertT(head1, tail1, 23);
    insertT(head1, tail1, 26);
    insertT(head1, tail1, 21);
    insertT(head2, tail2, 223);
    insertT(head2, tail2, 23);
    insertT(head2, tail2, 2);
    Node *point = ans(head1, head2);
    print(point);
    print(head1);
    cout << endl;
    print(head2);
    cout << endl;

    return 0;
}