#include<iostream>
using namespace std;

int main(){
    int arr[] = {0,1,0,2,1,0,1,3,2,1,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int leftarr[n];
    int rightarr[n];
    leftarr[0] = arr[0]; 
    for(int i =1;i<n;i++){
        leftarr[i] = max(leftarr[i - 1], arr[i]);
    }
    rightarr[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--){
        rightarr[i] = max(rightarr[i + 1], arr[i]);
    }
        int sum =0;
    for(int i=0;i<n;i++){
        if(min(leftarr[i],rightarr[i]) - arr[i] > 0){
            sum = sum + min(leftarr[i],rightarr[i]) - arr[i];
        }
    }
    cout<<sum;
    return 0;
}