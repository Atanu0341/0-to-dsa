#include <iostream>
using namespace std;

int main(){

    // for(int row = 1; row<=5; row++){

    //     for(char cols = 'a'; cols<='e'; cols++){
    //         cout<<cols<<" ";
    //     }
    //     cout<<endl;
    // }

    for(int row = 1; row<=5; row++){
        
        for(int cols = 1; cols<=5; cols++){
            char name = 'a'+cols-1;
            cout<<name<<" ";
        }
        cout<<endl;
    }

    return 0;
};