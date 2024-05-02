// Selection Sort
#include<iostream>
using namespace std;

void SelectionSort(int arr[],int n){
        for(int i = 0; i < n-1; i++){
              int minIndex = i;

              for(int j = i + 1; j < n; j++){
                if(arr[j] < arr[minIndex]){
                    minIndex = j;
                }
              }
              swap(arr[minIndex],arr[i]);
        }

        for(int i = 0; i < n; i++){
            cout<<arr[i]<<" ";
        }
}


int main(){
        int arr[] = {2,6,4,8,1};
        int n = 5;

        SelectionSort(arr,n);

        return 0;
}