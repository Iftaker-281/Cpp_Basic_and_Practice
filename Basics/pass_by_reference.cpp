#include<iostream>
using namespace std;

void display(int *num){
    *num = 20;
}

int main(){
    int x = 10;
    cout<<"Before passing the value: "<<x<<endl;
    display(&x);
    cout<<"After passing the value: "<<x<<endl;
}
