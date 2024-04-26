// search an element in a sorted and rotated array.
#include<iostream>
using namespace std;

int pivotIndex(int arr[],int n){
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
    return s;
}

int binarySearch(int arr[],int s,int e,int key){
    int start = s;
    int end = e;

    int mid = start + (end - start)/2;

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }

        // go to right wala part
        if(arr[mid] < key){
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}

int main(){
        int arr[7] = {5,8,9,10,1,3,4};
        int n = 7;
        int pivot = pivotIndex(arr,n);
        int k = 4;
        int ans = -1;

        if(k >= arr[pivot]){
           ans =  binarySearch(arr,pivot,n-1,k);
        }
        else{
           ans = binarySearch(arr,0,pivot-1,k);
       }
       cout<<ans;
       return 0;
}