#include <iostream>
using namespace std;

int main()
{
    int num, first = 0, second = 1, current;
    cout << "Enter the position in the Fibonacci sequence : ";
    cin >> num;

    if (num == 1){
        cout << first << endl;
        return 0;
    }else if (num == 2){
        cout << second << endl;
        return 0;
    }
    else{
        for (int i = 3; i <= num; i++){
            current = first + second;
            // update the values
            first = second;
            second = current;
        }
    }

    cout << current << endl;

    return 0;
}