
#include<iostream>
using namespace std;
int main(){
    int n,c=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<endl;
        for(int j=1;j<=i;j++)
        {
            cout<<c;
        }
        c++;
    }
}