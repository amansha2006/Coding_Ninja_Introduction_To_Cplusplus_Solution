#include<iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int num = (n / 2) + 1;
  int count = num - 1;
  for (int i = 1; i < num; i++) {
    for (int j = 1; j <= count; j++) {
      cout << " ";
    }
    count--;

    for (int k = 1; k <= (2 * i) - 1; k++) {
      cout << "*";
    }
    cout <<endl;
  }
    
    for(int j=1;j<=n;j++)
    cout<<"*";
    cout<<endl;
    
  count = 1;

  for (int i = 1; i <= (num - 1); i++) {
    for (int j = 1; j <= count; j++) {
      cout << " ";
    }
    count++;
    for (int k = 1; k <= (2 * (num - i)) - 1; k++) {
      cout << "*";
    }
    cout <<endl;
  }
}