int Solution::solve(int A, int B, int C) {
    int n = (C+A-1)%B;
    
    if(n==0){
        return B;
    }
    
    return n;
}
