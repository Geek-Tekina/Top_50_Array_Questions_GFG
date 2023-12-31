pair<long long, long long> getMinMax(long long a[], int n) {
    long long min = INT_MAX , max = -1;
    
    for(int i =0 ;i<n;++i){
        if(a[i] < min) min = a[i];
        if(a[i] > max) max = a[i];
    }
    return make_pair(min,max);
}