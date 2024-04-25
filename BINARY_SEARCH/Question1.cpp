// find the first and last occurence of an element in a sorted array
#include<iostream>
using namespace std;

int firstOccurence(int arr[],int n, int key){
    int start = 0;
    int end = n-1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else if(arr[mid] > key){
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
     return ans;
}

int lastOccurence(int arr[],int n, int key){
    int start = 0;
    int end = n-1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else if(arr[mid] > key){
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
     return ans;
}

int totalOccurences(int arr[],int n,int k){
   int first = firstOccurence(arr,n,k);
   int last = lastOccurence(arr,n,k);
   int total = (last - first) + 1;
}

int main(){
    int even[10] = {1,2,3,3,3,3,5,5,5,4};

    cout<<"first occurence of 3 is:"<<firstOccurence(even,10,3)<<endl;
    cout<<"last occurence of 3 is:"<<lastOccurence(even,10,3)<<endl;

    cout<<"Total number of occurences :"<<totalOccurences(even,10,3)<<endl;
    cout<<"Total number of occurences :"<<totalOccurences(even,10,5)<<endl;
    return 0;
}