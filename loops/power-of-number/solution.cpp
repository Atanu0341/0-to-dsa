#include<iostream>
using namespace std;

int main() {
    int num, power, n;
    cout<<"Enter number : ";
    cin>>num;

    cout<<"Enter power : ";
    cin>>power;

    n=num;

    for(int i = 1; i<power; i++){
        n*=num;
    }

    cout<<n<<endl;

    return 0;
}