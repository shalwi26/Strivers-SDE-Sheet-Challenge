//search for striver's soln for best explaination  

int search(int* arr, int n, int key) {

    int mid,l{0},h{n-1};

    while(l<=h){

        mid=(l+h)/2;

        if(arr[mid]==key)return mid;

        if(arr[l]<=arr[mid]){

         if(arr[l]<=key&&key<arr[mid]){h=mid-1;}   

            else{l=mid+1;}

        }

        else{

            if(arr[mid]<key&&key<=arr[h]){

            l=mid+1;    

            }

            else{h=mid-1;}

            

        }

        

    }

return -1;    

}
