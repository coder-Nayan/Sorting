#include<iostream>
#include<algorithm> //for inbuilt sort function
using namespace std;

int main(){
    int arr[10]={2,4,1,0,88,3,4,23,44,55};
    // sort(arr+3,arr+9); 
    sort(arr+3,arr+9,greater<int>()); //inbuilt sort function
    int n=10;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}//time complexity O(nlogn)