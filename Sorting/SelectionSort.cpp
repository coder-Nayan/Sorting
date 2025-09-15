#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){

    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){ //for ascending order
            //if(arr[j]>arr[minIndex]){ //for descending order
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}//time complexity O(n^2)

int main(){
    int arr[5]={2,4,1,0,88};
    selectionSort(arr,5);
    int n=5;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}