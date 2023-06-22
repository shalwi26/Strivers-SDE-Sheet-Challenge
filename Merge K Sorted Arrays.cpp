#include <bits/stdc++.h>

vector<int> merge(vector<int> array, vector<int> res) {
  vector<int> ans;

  int i = 0, j = 0;
  while (i < array.size() && j < res.size()) {
    if (array[i] < res[j]) {
      ans.push_back(array[i]);
      i++;
    } else {
      ans.push_back(res[j]);
      j++;
    }
  }

  while (i < array.size()) {
    ans.push_back(array[i]);
    i++;
  }

  while (j < res.size()) {
    ans.push_back(res[j]);
    j++;
  }

  return ans;
}

vector<int> mergeKSortedArrays(vector<vector<int>> &kArrays, int k) {
  vector<int> ans;

  for (int i = 0; i < kArrays.size(); i++) {
    ans = merge(kArrays[i], ans);
  }
  return ans;
}
