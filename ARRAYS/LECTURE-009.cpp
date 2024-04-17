#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    cout<<"Printing the array:"<<endl;
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Printing DONE"<<endl;
}

int main(){
    // declaration
    int num[15];

    // accessing elements
    //cout<<"value at 0th index"<<" "<<num[0]<<endl;

    // initialising an array
    int second[3] = {5,7,11};

    // accessing an element
    //cout<<"value at 2nd index"<<" "<<second[2]<<endl;

    int third[15] = {2,9};
    int n = 15;
    //printArray(third,n);
    //cout<<endl;
    int thirdSize = sizeof(third)/sizeof(int);
    //cout<<thirdSize<<endl;

    int fourth[10] = {0};
    int size = 10;
    //printArray(fourth,size);
    // for(int i = 0; i < size; i++){
    //     cout<<fourth[i]<<" ";
    // }cout<<endl;

    int fifth[9] = {1};
    int len = 9;
    //printArray(fifth,len);


    char ch[5] = {'a','b','c','r','e'};
    for(int i = 0; i < size; i++){
        cout<<ch[i]<<" ";
     }cout<<endl;

     double firstdouble[10];
     float firstfloat[4];
     bool firstbool[8];


        return 0;
}