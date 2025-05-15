#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    int position;
    int value;
    
    cin>>position>>value;
    
    int j = 0;
    int answer[n+1];

    for(int i = 0; i<n+1; i++){
        if(i == position-1){
            answer[i]=value;
        }else{
            answer[i]=arr[j];
            j++;
        }
    }

    for (int i = 0; i < n+1; i++)
    {
        cout<<answer[i]<<" ";
    }
    
    return 0;
}