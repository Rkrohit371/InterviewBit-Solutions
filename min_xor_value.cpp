int Solution::findMinXor(vector<int> &A) {
    sort(A.begin(),A.end());
    int value=INT_MAX;
    for(int i=0;i<A.size()-1;i++){
        int x=A[i] ^ A[i+1];
        value=min(value,x);
    }
    return value;
}
