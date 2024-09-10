#include <iostream>
using namespace std;

int main(){

    // for(char row = 'a'; row<='e'; row++){

    //     for(int cols = 1; cols<=5; cols++){
    //         cout<<row<<" ";
    //     }
    //     cout<<endl;
    // }

    for(int row = 1; row<=5; row++){
        
        char name = 'a'+row-1;
        for(int cols = 1; cols<=5; cols++){
            cout<<name<<" ";
        }
        cout<<endl;
    }

    return 0;
};