#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}

void sort_0_1(int arr[],int n){
    int s = 0; 
    int e = n-1;
    while(s < e){
         while(arr[s] == 0 && s < e){
            s++;
         }
         while(arr[e] == 1 && s < e){
            e--;
         }
         if(s < e)
         swap(arr[s],arr[e]);
         s++;
         e--;
    }
}

int main(){
    int arr[8] = {1,0,0,1,1,0,1,0};
    sort_0_1(arr,8);
    printArray(arr,8);
}