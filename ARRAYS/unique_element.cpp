#include<iostream>
using namespace std;

int uniqueElement(int arr[],int n){
    int ans = 0; 
    for(int i = 0; i < n; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){
    int arr[7] = {2,3,5,4,3,2,4};

    int ans = uniqueElement(arr,7);
    cout<<ans;

    return 0;
}