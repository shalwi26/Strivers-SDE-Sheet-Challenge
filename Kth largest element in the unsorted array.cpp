#include <bits/stdc++.h> 
int kthLargest(vector<int> nums, int n, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i = 0; i < k; i++)
        pq.push(nums[i]);
    for(int i = k; i < n; i++)
    {
        if(pq.top() < nums[i])
        {
            pq.pop();
            pq.push(nums[i]);
        }
    }
    return pq.top(); 
}
