// LeetCode Solution

/*
class Solution {
public:
    bool canWinNim(int n) {
        
        if(n%4==0){
            return 0;
        }else{
            return 1;
        }
    }
};
*/

// Standalone Implementation

#include<iostream>
using namespace std;

bool canWinNim(int n) {
        
    if(n%4==0){
        return 0;
    }else{
        return 1;
    }
}

int main(){
    int n;
    cin>>n;
    cout<<canWinNim(n)<<endl;
    return 0;
}


    