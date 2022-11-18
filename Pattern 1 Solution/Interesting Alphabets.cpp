
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1,c=n;i<=n;i++,c--)
    {
        cout<<endl;
        char start='A'+c-1;
        for(int j=1;j<=i;j++)
        {
            char ch=start+j-1;
            cout<<ch;
            
        }
    }
}