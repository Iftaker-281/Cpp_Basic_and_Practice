#include<iostream>
using namespace std;

void f1(int arr[]){
    for(int i = 0; i<5; i++){
        arr[i] = arr[i] + 5;
    }
}

int main(){
    int arr[] = {1,2,3,4,5};

    for(int i = 0; i<5; i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    f1(arr);

    for(int i = 0; i<5; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
