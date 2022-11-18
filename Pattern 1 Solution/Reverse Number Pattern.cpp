
#include<iostream>
using namespace std;
int main(){
    int n,c;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        c=i;
        cout<<endl;
        for(int j=1;j<=i;j++)
        {
            cout<<c;
            c--;
        }
    }
}