#include <iostream>
#include <algorithm>

using namespace std;

int solve(int A, int B) {
    int count = 0;
    
    // Check if the position is valid
    if (A < 1 || A > 8 || B < 1 || B > 8) {
        return 0;  // Invalid position
    }
    
    // Count possible moves in each direction
    count += min(8 - A, 8 - B);  // Bottom-right diagonal
    count += min(8 - A, B - 1);  // Bottom-left diagonal
    count += min(A - 1, B - 1);  // Top-left diagonal
    count += min(A - 1, 8 - B);  // Top-right diagonal
    
    return count;
}

int main() {
    int A, B;
    cout << "Enter the position of the bishop (row column): ";
    cin >> A >> B;
    
    int result = solve(A, B);
    cout << "Number of possible moves: " << result << endl;
    
    return 0;
}
