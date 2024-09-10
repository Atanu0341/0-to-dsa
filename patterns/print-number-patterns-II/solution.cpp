#include <iostream>
using namespace std;

int main(){
    // int count = 1;

    // for(int row = 1; row<=5; row++){

    //     for(int cols = 1; cols<=5; cols++){
    //         cout<<count++<<" ";
    //     }
    //     cout<<endl;
    // }

    for(int row = 1; row<=5; row++){

        for(int cols = 1; cols<=5; cols++){
            cout<<(row-1)*5+cols<<" ";
        }
        cout<<endl;
    }

    return 0;
};