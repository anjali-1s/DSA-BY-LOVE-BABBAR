// Book allocation problem
#include<iostream>
using namespace std;

bool ispossible(int arr[],int n,int m,int mid){
    int studentCount = 1;
    int pagesum = 0;

    for(int i = 0; i < n; i++){
        if(pagesum+arr[i] <= mid){
            pagesum += arr[i];
        } 
        else {
            studentCount++;
            if(studentCount > m || arr[i] > mid){
                return false;
            }
            pagesum = arr[i];
        }
    }
    return true;
}

int main(){
    int arr[] = {2,8,8,4,5};
    int n = 5;
    int m = 6;
    
    int s = 0;
    int sum = 0;

    for(int i = 0; i <n; i++){
        sum += arr[i];
    }

    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;
    
    while(s <= e){
        if(ispossible(arr,n,m,mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        cout<<mid;
        mid = s + (e - s)/2;
    }

    cout<<"The answer is:"<<ans;

    return 0;
}