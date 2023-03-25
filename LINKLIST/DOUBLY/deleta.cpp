#include <climits>
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *per;
    
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->per = NULL;
    }
    ~Node()
    {
        int val = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "The memory is free for = " << val;
    }
};
void delete (Node *&head, int p)
{
   if (p ==1)
   {
    Node* temp = head ;
    temp -> next -> per = NULL;
    head = temp ->next;
    temp -> next = NULL ;
    delete temp;
    
   }
   else{
    Node *cur = head;
    Node* per = NULL;
   
    int c = 1;
    while (c < p)
    {   per =cur;
        cur = cur->next;
        c++;
    }
    cur ->  per = NULL;
    per -> next = cur -> next;
    cur -> next = NULL;
    delete cur;
}}