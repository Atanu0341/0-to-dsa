// LeetCode Solution

/*
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<1){
            return 0;
        }
        
        while(n!=1){
            if(n%2==1){
                return false;
            }
            n/=2;
        }
        return true;
    }
};
*/

// Standalone Implementation

#include<iostream>
using namespace std;

bool isPowerOfTwo(int n) {
        if(n<1){
            return false;
        }
        
        while(n!=1){
            if(n%2==1){
                return false;
            }
            n/=2;
        }
        return true;
}

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;

    cout << (isPowerOfTwo(num) ? "True" : "False") << endl;
    return 0;
}

