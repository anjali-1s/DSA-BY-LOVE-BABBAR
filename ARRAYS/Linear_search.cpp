#include<iostream>
using namespace std;

bool searchKey(int arr[],int n,int key){
    for(int i = 0 ; i< n; i ++){
        if(arr[i] == key){          
            return 1;
        }
    }
     return 0;
}

int main(){
    int arr[8];
    int n = 8;
    //taking input for an array
    for(int i = 0; i < n; i ++){
        cin>>arr[i];
    }cout<<" ";

    cout<<"Enter the element to search:";
    int key;
    cin>>key;

    int result = searchKey(arr,n,key);
    if(result){
        cout<<"Key value is present";
    }
    else{
        cout<<"Key value is not present";
    }

    cout<<endl;
    return 0;
}