#include<iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter number : ";
    cin>>num;

    if(num<2){
        cout<<"Not Prime"<<endl;
        return 0;
    }else{
        for(int i = 2; i<num; i++){
            if(num%i==0){
                cout<<"Not Prime"<<endl;
                return 0;
            }
        }
        cout<<"Prime"<<endl;
    }

    return 0;
}