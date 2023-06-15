#include <bits/stdc++.h> 
using namespace std;

long getTrappedWater(long *arr, int n){
    vector<long>left(n),right(n);
    for(int i=0;i<n;i++) {
        left[i]=(i==0?arr[i]:max(left[i-1],arr[i]));
    }
    for(int i=n-1;i>=0;i--) {
        right[i]=(i==n-1?arr[i]:max(right[i+1],arr[i]));
    }
    long ans=0;
    for(int i=0;i<n;i++) {
        ans+=(min(right[i],left[i])-arr[i]);
    }
    return ans;
}
