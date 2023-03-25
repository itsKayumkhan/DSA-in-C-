
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
        cout << "Your memory is remove for = " << val << endl;
    }
};
int len_loop(Node *&head)
{
    Node *slow = head;
    Node *fast = head;

    while (fast && slow)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            int c = 1;
            slow = slow->next;
            while (slow != fast)
            {
                c++;
                slow = slow->next;
            }
            return c;
        }
    }
    return -1;
}
