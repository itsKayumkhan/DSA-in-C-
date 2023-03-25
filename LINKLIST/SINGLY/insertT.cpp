 
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
void insertT(Node *&head,Node *&tail, int d)
{   if ( head == NULL)
    {
      Node* temp = new Node(d);
      tail  = temp;
       head = temp;
    }else{
    
   Node *temp = new Node(d);
   tail->next = temp;
   tail = temp;}
}
// void print(Node *&tail)
// {
//    Node *temp = tail;
//    while (temp != NULL)
//    {
//       cout << temp->data << " " << endl;
//       temp = temp->next;
//    }
// } 
 