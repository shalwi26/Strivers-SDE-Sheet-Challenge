vector<vector<int>> pairSum(vector<int> &arr, int s){

// Write your code here.

sort(arr.begin(), arr.end());

vector<vector<int>> final;

int low = 0, high = arr.size()-1;

 

while(low < high){

if(arr[low] + arr[high] == s){

 

if(arr[low] != arr[high]){

int x = arr[low],y = arr[high];

int j = low+1, lc = 1, k = high-1, hc = 1;

 

while(arr[j] == x){

lc++;

j++;

}

 

while(arr[k] == y){

hc++;

k--;

}

 

for(int l=0;l<lc*hc; l++){

vector<int> v;

v.push_back(arr[low]);

v.push_back(arr[high]);

final.push_back(v);

}

low = j;

high = k;

}

else{

int r = high - low +1;

int c = (r * (r - 1))/2;

for(int l=0;l<c; l++){

vector<int> v;

v.push_back(arr[low]);

v.push_back(arr[high]);

final.push_back(v);

}

return final;

}

}

else if(arr[low] + arr[high] > s){

high--;

}

else{

low++;

}

}

 

return final;

}

