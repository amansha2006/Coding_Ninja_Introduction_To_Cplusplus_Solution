#include<iostream>
using namespace std;
int sum_of_even_digits(int n) {
    int r, sum = 0,lum=0;
    while (n > 0) {
        r = n % 10;    
        n = n / 10;    
        if (r % 2 == 0){
            sum = sum + r; }
        else
           lum=lum+r;
    }
    cout<<sum<<" "<<lum;
    return 0;
}
int main() {
    int n;
    cin>>n;
    sum_of_even_digits(n);
}