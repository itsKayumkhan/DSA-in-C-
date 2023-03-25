 
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
        cout << "The memory is free for = " << val;
    }
};
void delate(int p, Node *&head)
{

    if (p == 1)
    {
        Node *temp = head;
        head = head->next;

        temp->next = NULL;
        delete temp;
    }

    Node *cur = head;
    Node *per = NULL;

    int c = 1;
    while (c < p)
    {
        per = cur;
        cur = cur->next;
        c++;
    }

    per->next = cur->next;
    cur->next = NULL;
    delete cur;
}

void insertT(Node *&tell, int d)
{
    Node *temp = new Node(d);
    tell->next = temp;
    tell = tell->next;
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " " << endl;
        temp = temp->next;
    }
}

 