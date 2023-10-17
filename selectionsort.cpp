#include<iostream>
using namespace std;

void swap(int a[],int i,int j){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void selectionSort(int a[],int n){
    for(int i = 0;i<n-1;i++){
        int min = i;
        for(int j = i+1;j<n;j++){
            if(a[j]<a[min]){
                min = j;
            }
        }
        if(min!=i){
            swap(a,min,i);
        }
    }
}

int main(){

    int a[] = {3,6,1,7,9,10,2};
    int n = sizeof(a)/sizeof(a[0]);
cout<<"element of array are ";
    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }
    selectionSort(a,n);
    cout<<"\nelement of array are ";
    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}