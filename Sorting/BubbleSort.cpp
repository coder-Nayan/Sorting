#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){

    for(int i=0;i<n-1;i++){
        bool isSwap=false; //optimized version
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){ //for ascending order
                //if(arr[j]<arr[j+1]){ //for descending order
                swap(arr[j],arr[j+1]);
                isSwap=true;
            }
        }
        if(isSwap==false){
            break;
        }
    }
}//time complexity O(n^2)

int main(){
    int arr[5]={2,4,1,0,88};
    bubbleSort(arr,5);
    int n=5;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }   
    return 0;
}