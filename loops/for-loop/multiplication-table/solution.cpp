#include<iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter number : ";
    cin>>num;

    // for(int i = 1; i<=10; i++){
    //     cout<<num<<" * "<<i<<" = "<<num*i<<endl;
    // }

    for(int i = num; i<=10*num; i+=num){
        cout<<i<<" "<<endl;
    }

    return 0;
}