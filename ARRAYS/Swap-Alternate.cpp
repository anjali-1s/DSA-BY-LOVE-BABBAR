#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i = 0; i < n ; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void swapAlternate(int arr[],int n){
    for(int i = 0; i < n; i+=2){
        if(i+1 < n){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main(){
    int even[8] = {1,4,5,6,7,9,5,4};
    int odd[5] = {2,4,3,5,6};

    swapAlternate(even,8);
    printArray(even,8);

    cout<<endl;

    swapAlternate(odd,5);
    printArray(odd,5);
}