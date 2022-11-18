#include<iostream>
using namespace std;
int main()
{
  int n,a=1;
  cin>>n;
  int i=1;
  while(i<=n)
    {
      cout<<"\n";
      int j=1;
      int z=a;
      while(j<=i)
        {
          cout<<z;
          j++;
          z++;
        }
      a++;
      i++;
    }
}