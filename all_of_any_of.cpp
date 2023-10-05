// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int arr[6] = {4,3,2,5,8,7};
//     all_of(arr,arr+6, [](int x) {return x>0;})?
//     cout<<"Numbers are positive" :
//     cout<<"Numbers are not positive";
//     return 0;
// }

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[6] = {4,3,2,1,6,-5};
    any_of(arr,arr+6, [](int x) {return x<0;})?
    cout<<"Negative number exist" :
    cout<<"All number are positive";
    return 0;
}