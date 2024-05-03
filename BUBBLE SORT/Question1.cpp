// Bubble sort
#include<iostream>
using namespace std;

void BubbleSort(int arr[],int n){

    // for different rounds
    for(int i = 1; i < n; i++){
         bool swapped = false;

        // to traverse entire array to find ith largest element
        for(int j = 0; j < n-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        // already sorted
        if(swapped == false)
          break;
    }
    // to print the arary
        for(int i = 0; i <n; i++){
            cout<<arr[i]<<" ";
        }
}

int main(){
    int arr[] = {10,1,7,6,14,9};
    int n = 6;

    BubbleSort(arr,n);

    return 0;
}