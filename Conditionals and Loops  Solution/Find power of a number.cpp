#include<iostream>
using namespace std;

int main() {
	int x,n,mul=1;
    cin>>x>>n;
    while(n--)
    {
        mul=mul*x;
    }
	cout<<mul;
}
