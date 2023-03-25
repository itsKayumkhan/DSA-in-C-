#include <climits>
 #include <iostream>
using namespace std;
int main () {
    int n1=3 ,n2=3 ,n3=3;
  int m[n1][n2] = {{1,2,3} , {4,5,6} , {7,8,9}};
  int n[n2][n3] = {{1,2,3} , {4,5,6} , {7,8,9}};

  int ans[n1][n3] ;
  for (int i = 0; i < 3; i++)
  { 
    for (int j = 0; j < 3; j++)
      ans[i][j] = 0;
  }
  
  for (int i = 0; i <n1 ; i++)
  {
    for (int j = 0; j < n3; j++)
    {
    for (int k = 0; k < n2; k++)
    {
        ans[i][j] += m[i][k] * n[k][j];
    }
    
    }
    
  }
  for (int i = 0; i < 3; i++)
  { 
    for (int j = 0; j < 3; j++)
      cout<< ans[i][j] << " ";
      cout << endl;
  }
  
   return 0;
}