int calculateMinPatforms(int at[], int dt[], int n) {
    sort(at,at+n);
    sort(dt,dt+n);
    int i = 0 , j = 0;
    int maxi = 0;
    int platforms = 0;
    while(i < n && j < n){
        if(at[i] <= dt[j]) i++ , platforms++;
        else j++ , platforms--;
        maxi = max(platforms,maxi);
    }
    return maxi;
}
