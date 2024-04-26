// find the pivot element in an array.
#include <iostream>
using namespace std;

int pivot(int arr[],int n){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;


    while(s<e){
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return arr[s];
}

int main(){
    int arr[6] = {1,7,3,7,5,6};
    int ans = pivot(arr,5);
    cout<<"Pivot element is:"<<ans;
    return 0;
}