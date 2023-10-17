#include<iostream>

#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
     cin>>arr[i];
  }
sort(arr,arr+n);  // 560 100 53 23 20 19
  for(int i=0; i<n; i++){
     if(i != n-1){
        cout<<arr[i]<<" "<<arr[n-1]<<endl;
        n = n-1;
     }
     else{
        cout<<arr[i]<<" "<<"0"<<endl;
        }
  }
  return 0;
}