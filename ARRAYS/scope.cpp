#include<iostream>
using namespace std;

void updateArray(int arr[],int n){
    //updating the value
    arr[0] = 120;
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }


    // going back to the main function
}

int main(){
    int arr[3] = {1,2,3};
    int arrlength = sizeof(arr)/sizeof(int);
    
    cout<<"Printing the original array value"<<endl;
    for(int i = 0; i < arrlength; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    updateArray(arr,arrlength);
    return 0;
}