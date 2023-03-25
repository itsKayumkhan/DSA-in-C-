#include <climits>
#include <iostream>
#include <stack>
using namespace std;
class Stack
{
public:
    int size;
    int *arr;
    int top;
    Stack(int size)
    {
        this->size = size;

        arr = new int[size];
        top = -1;
    }
    void push(int d)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = d;
        }
        else
            cout << "overflow" << endl;
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
            cout << "EMPTY" << endl;
    }

    int peek()
    {
        if (top == -1)
            cout << "stack is empty" << endl;
        else
            return arr[top];
    }

    bool empty()
    {
        if (top == -1)
        {
            return true;
        }
        else
            return false;
    }
};

int main()
{
    Stack s(5);
    s.push(10);
    s.push(2);
 
    cout << s.peek() << endl;
    s.pop();

    cout << s.peek() << endl;
 
   
    s.pop();
    
    cout<< s.peek()<<endl;

    cout << s.empty();

    return 0;
}