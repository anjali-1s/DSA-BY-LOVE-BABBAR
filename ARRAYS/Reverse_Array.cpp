#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i = 0; i < n ; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void ReverseArray(int arr[],int n){
    int start = 0;
    int end = n-1;

    while(start <= end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[6] = {2,3,4,5,6,7};
    int n = 6;

    cout<<"Array before reversing:";
    printArray(arr,n);

    cout<<"Array after reversing:";
    ReverseArray(arr,n);
    printArray(arr,n);
}