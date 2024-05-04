// Insertion sort
#include<iostream>
using namespace std;

void InsertionSort(int arr[],int n){

        // for different rounds
        for(int i = 1; i < n; i++){

            int temp = arr[i];

            int j = i - 1;
            while(j >= 0)
            {
                if(arr[j] > temp)
                {
                    arr[j+1] = arr[j]; // shifting
                }
                else 
                {
                    // ruk jao
                    break;
                }
                j--;
            }
            arr[j+1] = temp;
        }

        // printing the array
        for(int i = 0; i < n; i++){
            cout<<arr[i]<<" ";
        }
}

int main(){
    int arr[] = {22,20,37,13,26,16,39,13,14,32,35,40,21,37};
    int n = 14;

    InsertionSort(arr,n);

    return 0;
}