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
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
    }
    else
    {

        Node *temp = new Node(d);
        tail->next = temp;
        tail = temp;
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
Node *insertShort(Node *&head, int d)
{
    Node *temp = head;
    Node *prev = head;
    Node *newN = new Node(d);
    int flage = 0;
    if (head == NULL or d <= head->data)
    {
        newN->next = head;
        head = newN;
    }
    else
    {

        while (temp)
        {
            if (temp->data >= d)
            {
                prev->next = newN;
                newN->next = temp;
                flage = 1;
                break;
            }
            prev = temp;
            temp = temp->next;
        }
    }
    
  
    if (flage == 0)
    {   print(head);
        prev->next = newN;
        newN->next = NULL;
        
    
    }
    return head;
}

int main()
{
    Node *head = new Node(43);
    insertH(head, 32);
    insertH(head, 16);
    insertH(head, 12);
    insertH(head, 8);
    insertH(head, 4);
    insertH(head, 2);

    cout << endl  << endl;
    insertShort(head, 44);


    print(head);
    return 0;
}