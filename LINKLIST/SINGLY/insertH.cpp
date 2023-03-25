 
class Node{
  public:
  int data;
  Node* next;

  Node(int data)
{
  this -> data= data;
  this -> next = NULL ;
}
};
void insertH(Node* &head ,Node* &tail ,int d){
    if ( head == NULL)
    {
      Node* temp = new Node(d);
      head = temp;
      tail = temp;
    }else{
    
    Node* temp =  new Node(d);
   temp -> next = head;
   head = temp;}
}
void print(Node* &head){ 
  Node* temp = head;
     while (temp != NULL)
     {
      cout << temp -> data << " " << endl;
      temp = temp -> next;
     }
     
}

 