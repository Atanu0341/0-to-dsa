#include<iostream>
using namespace std;

int main() {
    
    for(int row = 5; row>=1; row--){
        for(int cols = 1; cols<=row; cols++){
            cout<<row<<" ";
        }
        cout<<endl;
    }

    return 0;
}
