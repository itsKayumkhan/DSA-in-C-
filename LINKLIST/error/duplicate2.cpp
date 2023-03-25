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
    ~Node()
    {
        int val = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Your duplicate data is remove for = " << val << endl;
    }
};
void insertH(Node *&head, int d)

{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
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
Node *remove1(Node *head)
{
    Node *temp = head;
    Node *nex = temp->next;
    while (temp != NULL)
    {

        while (nex != NULL)
        {
            if (temp->data == nex->data)
            {
                Node *next_next = nex->next;
             Node   *del = nex;
                delete del;
                temp = next_next;
                
            }
            nex=nex->next;
           
        } 
        temp=temp->next;
        
    }
    
    return head;
}

int main()
{
    Node *head = new Node(1);

    insertH(head, 1);
    insertH(head, 14);
    insertH(head, 1);
    insertH(head, 14);
    insertH(head, 1);
    print(head);
    cout << endl;
 
    remove1(head);
      print(head);

  

    return 0;
}