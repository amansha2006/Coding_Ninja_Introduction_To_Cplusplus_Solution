#include<iostream>
using namespace std;
int main(){
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
        int star=1,co=1;
        while(star<=i) {
            cout<<co;
            star++;
            co++;
        }
        cout<<endl;
        i++;
    }
}