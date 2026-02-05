#include<iostream>
using namespace std;

int sum_of_digit(int n);

int main(){
    int n;
    cin>>n;
    cout<<sum_of_digit(n)<<endl;
    return 0;
}

int sum_of_digit(int n){
    int digit = 0;
    while(n>0){
        digit += n%10;
        n /= 10;
    }
    return digit;
}
