#include<iostream>
using namespace std;

int main() {
	char c;
	int a;
	cin>>c;
	a=c;
    if(65<=a && a<=90){
    	cout<<1;}
    else if(97<=a && a<=122) {
		cout<<0;}
    else
        {cout<<-1;}
}
