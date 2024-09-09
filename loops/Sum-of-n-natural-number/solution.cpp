#include<iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cout<<"Enter number : ";
    cin>>num;

    for(int i = 1; i<=num; i++){
        sum+=i;
    }

    cout<<sum<<endl;

    // cout<< (num*(num+1))/2<<endl;

    return 0;
}