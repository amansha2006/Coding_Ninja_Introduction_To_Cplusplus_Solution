#include<iostream>
using namespace std;
int main ()
{
  int n;
  cin>>n;
  int i=1;
  while(i<=n)
    {
      int sp=1;
      while(sp<=n-i)
        {
          cout<<" ";
          sp++;
        }
      int j=1;
      while(j<=i)
        {
          cout<<"*";
          j++;
        }
      j=i-1;
      while(j>=1)
        {
          cout<<"*";
            j--;
        }
      cout<<endl;
      i++;
    }
}