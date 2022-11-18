
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        char start='A'+i-1;
        cout<<endl;
        for(int j=1;j<=i;j++)
        {
            char ch=start+j-1;
            cout<<ch;
        }
    }
}