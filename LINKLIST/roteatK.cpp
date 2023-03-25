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
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int getLen(Node *head)
{
    int n = 0;
    while (head)
    {
        n++;
        head = head->next;
    }

    return n;
}
Node *rotateK(Node *head, int k)
{
    int n = getLen(head);
    Node *temp = head;
    Node *prev = head;
    int j = 0;
 if (k == 0)
        return NULL;
    int loop = k % n;
    loop = n - loop;
   
   
   
    if (k == 1 or loop == k)
        return head;

    while (temp != NULL)
    {
        if (j == loop)
        {
            prev = temp->next;
            temp->next = NULL;
           
            break;
        }
        temp = temp->next;
        j++;
    }
      temp = prev;
    while (prev->next != NULL)
    {
        prev = prev->next;
       
    }
    prev->next = head;
    cout << "hi3" << endl;
    print(temp);
    
}

// one more  algo by recursion

Node* rotate(Node *head ,int k )
{
    int c=0;
    Node *cur = head;
    Node *nex = NULL;
    Node *pre = NULL;

    while (c < k  and cur != NULL)
    {
        nex = cur->next;
        cur ->next = pre;
        pre = cur;
        cur = nex;
        c++;
    }


    if(nex != NULL)
    head ->next = rotate(nex,k);
       
       return pre;   

}

int main()
{
    Node *head = new Node(10);
    insertH(head, 23);
    insertH(head, 26);
    insertH(head, 21);
    insertH(head, 223);
    insertH(head, 3);
    insertH(head, 2);

    print(head);
    cout << endl;
    rotate(head, 2);
      print(head);
    cout << endl;
    return 0;
}