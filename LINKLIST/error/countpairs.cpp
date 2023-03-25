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
int pairs(Node *head, int d)
{
    Node *temp = head->next;
    int count=0;
    while (head)
    {
        while (temp)
        {
            if ((temp->data) + (head->data) == d)
                count++; 
            temp = temp->next;
        }
      
        head = head->next;
        temp = head->next;
     
    } 


    return count;
}

int main()
{
    Node *head = new Node(3);
    insertH(head, 5);
    insertH(head, 2);
    insertH(head, 4);
    insertH(head, 1);

    
    cout<<endl<<endl;
    int c = pairs(head, 5);
   
   cout << c << endl;
    return 0;
}