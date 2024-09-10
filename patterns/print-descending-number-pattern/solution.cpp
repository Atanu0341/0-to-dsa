#include <iostream>
using namespace std;

int main(){

    for(int row = 1; row<=5; row++){

        for(int cols = 5; cols>=1; cols--){
            cout<<cols<<" ";
        }
        cout<<endl;
    }

    return 0;
};