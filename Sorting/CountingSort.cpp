#include<iostream>
#include<climits>
using namespace std; 

void countSort(int arr[],int n){
    int freq[100000]={0}; //assuming that the elements are in the range of 0 to 10^5
    int minVal=INT_MAX, maxVal=INT_MIN;
    for(int i=0;i<n;i++){
        minVal=min(minVal,arr[i]);
        maxVal=max(maxVal,arr[i]);
    }
    //1st step -o(n)
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    //2nd step - 0(range)= max-min
    for(int i=minVal,j=0;i<=maxVal;i++){
        while(freq[i]>0){
            arr[j]=i;
            j++;
            freq[i]--;
        }
    }   
}
int main(){
    int arr[8]={1,4,1,3,2,4,3,7};
    countSort(arr,8);
    int n=8;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}//time complexity O(n+range) , range = max-min