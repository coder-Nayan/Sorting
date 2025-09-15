#include<iostream>
using namespace std;

void insertionSort(int arr[],int n){
    for (int i=1;i<n;i++){
        int curr=arr[i]; 
        int prev=i-1;
        while(prev>=0 and arr[prev]>curr){ //for ascending order
        //while(prev>=0 and arr[prev]<curr){ //for descending order
            swap(arr[prev],arr[prev+1]);
            prev--; 
        }
        arr[prev+1]=curr;
    }
}//time complexity O(n^2)

int main(){
    int arr[5]={2,3,1,5,6};
    insertionSort(arr,5); 
    int n=5;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } 
    return 0;
}
