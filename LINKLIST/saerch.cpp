#include <bits/stdc++.h>
using namespace std;
 
 
class Node {
public:
    int data;
    Node* next;
    Node(int data)
    {
        this -> data=data;
        this-> next = NULL;
    }
};
void insertH(Node* &head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
 
 
bool search(Node* head,int k)
{
    Node* temp = head;
    while (temp != NULL)
    {
        if(temp->data == k)  return true;
         
        temp = temp -> next;
       }
    return false;

}
 
/* Driver code*/
int main()
{
 
    Node* node1 = new Node(11);
    Node* head = node1;
    
    insertH(head, 10);
    insertH(head, 30);
    insertH(head, 11);
    insertH(head, 21);
    insertH(head, 14);
 
       
    search(head, 1) ? cout << "PRESENT" : cout << "ABSENT";
    return 0;
}