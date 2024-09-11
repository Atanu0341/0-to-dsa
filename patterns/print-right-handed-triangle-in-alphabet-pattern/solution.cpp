#include<iostream>
using namespace std;

int main() {
    char name = 'a';
    
    for(char row = 1; row<=5; row++){
        for(int cols = 1; cols<=row; cols++){
            cout<<name<<" ";
        }
        cout<<endl;
        name++;
    }

    return 0;
}
