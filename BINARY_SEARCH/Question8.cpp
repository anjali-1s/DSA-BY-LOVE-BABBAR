// Aggressive cows
#include<iostream>
using namespace std;

bool ispossible(int stalls[],int n,int k,int mid){
    int cowCount = 1;
    int lastpos = stalls[0];

    for(int i = 0; i < n; i++){
        if(stalls[i] - lastpos >= mid){
            cowCount++;
            if(cowCount == k){
                return true;
            }
            lastpos = stalls[i];
        }
    }
    return false;
}

int main(){
    int stalls[] = {51,59,68,81,97,93,99};
    int n = 7;
    int k = 4;

    int s = 0;
   int maxi = -1;

   for(int i = 0; i < n; i++){
       maxi = max(maxi,stalls[i]);
   }

   int e = maxi;
   int ans = -1;
   int mid = s + (e - s)/2;

   while(s <= e){
       if(ispossible(stalls,n,k,mid)){
           ans = mid;
           s = mid + 1;
       }
       else{
           e = mid - 1;
       }
       mid = s + ( e - s)/2;
   }

   cout<<"The answer is:"<<ans<<endl;

   return 0;
}