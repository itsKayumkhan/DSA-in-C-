#include <climits>
 #include <iostream>
 #include <stack>
using namespace std;
class Stack
{  
    public:
    int top1;
    int top2;
    int size;
    int *arr;
   stack(int size)
   {
    this->size = size;
    arr = new int[size]; 
    top1=-1;
    top2=size;

   }

   void push1(int d)
   {
      if(top2 - top1 > 1)
        {
            top1++;
            arr[top1] = d;
        }
        else
        cout<<"overflow"<<endl;
   }
     void push2(int d)
   {
      if(top2 - top1 >= 1)
        {
            top2--;
            arr[top2] = d;
        }
        else
        cout<<"overflow"<<endl;
   }

   void pop1()
{
    if(top1 >=0)  top1--;
    else cout<<"empty"<<endl;
}
   void pop2()
{
    if(top2 >=0)  top2++;
    else cout<<"empty"<<endl;
}


};

int main () {
    Stack s(5);
    s.push1(12);
    s.push1(1);
 
    s.push2(122);
    s.push2(123);

    s.pop2();
    s.pop1();
    
        
    

    
  
   return 0;
}