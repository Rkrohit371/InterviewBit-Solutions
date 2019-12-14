int Solution::maximumGap(const vector<int> &A) {
    if(A.size()<2)
      return 0;
    vector<int>temp;
    for(int i=0;i<A.size();i++){
        temp.push_back(A[i]);
    }
    sort(temp.begin(),temp.end());
    int dist=0;
    for(int i=0;i<A.size()-1;i++){
        dist=max(dist,temp[i+1]-temp[i]);
    }
    return dist;
}
