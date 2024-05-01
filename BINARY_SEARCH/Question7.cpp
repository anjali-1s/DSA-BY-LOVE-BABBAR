// painter partition problem
#include<iostream>
using namespace std;

bool ispossible(int arr[],int n,int k,int mid){
    int paintercount = 1;
    int distance = 0;

    for(int i =0; i < n; i++){
        if(distance + arr[i] <= mid){
            distance += arr[i];
        }
        else{
            paintercount++;
            if(paintercount >  k || arr[i] > mid){
                return false;
            }
            distance  = arr[i];
        }
    }
    return true;
}

int main(){
    int arr[] = {10,20,30,40};
    int n = 4;
    int k = 2;

    
   int s = 0;
   int sum = 0;
   for (int i = 0; i < n; i++) {
     sum += arr[i];
   }
   cout<<sum<<endl;

   int e = sum;
   int ans = -1;
   int mid = s + (e -s)/2;

   while(s <= e){
       if(ispossible(arr,n,k,mid)){
           ans = mid;
           e = mid - 1;
       }
       else{
           s = mid + 1;
       }
       mid = s + (e -s)/2;
   }
   cout<<ans;
}