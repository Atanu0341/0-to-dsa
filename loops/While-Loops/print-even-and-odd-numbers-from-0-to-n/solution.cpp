#include<iostream>
using namespace std;

int main() {
    int num, i = 1, j = 1;
    cout<<"Enter the number : ";
    cin>>num;

    cout<<"Even Number : ";
    while(i<=num){
        if(i%2==0){
            cout<<i<<" ";
        }  
        i++;
    }
    cout<<endl;

    cout<<"Odd Number : ";
    while(j<=num){
        if(j%2!=0){
            cout<<j<<" ";
        }
        j++;
    }

    return 0;
}