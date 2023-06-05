#include <bits/stdc++.h>

long long maxSubarraySum(int a[], int n) {

    long long max_sum=0,maxelement=0;

    for(int i=0;i<n;i++)

    {

        maxelement=maxelement+a[i];

        if(max_sum<maxelement)

        {

            max_sum=maxelement;

        }

        else if(maxelement<0)

        {

            maxelement=0;

        }

    }

    return max_sum;

}
