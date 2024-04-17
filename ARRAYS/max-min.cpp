#include<iostream>
#include<limits.h>
using namespace std;

int getMax(int num[],int n){
    int maxi = INT_MIN;

    for(int i = 0; i < n; i++){
        maxi = max(maxi,num[i]);
    }

        // returning max value
        return maxi;
}

int getMin(int num[],int n){
    int mini = INT_MAX;

    for(int i = 0; i < n; i++){
        mini = min(mini,num[i]);
    }

        // returning max value
        return mini;
}

int main(){
    int size;
    cin>>size;

    int num[100];

    //taking input for array
    for(int i = 0; i < size; i++){
        cout<<"Entered value is:"<<" ";
        cin>>num[i];
    }

    int ans = getMax(num,size);
    cout<<"Maximum value of the array is :"<<ans<<endl;

    cout<<"Minimum value of the array is :" <<getMin(num,size);
}