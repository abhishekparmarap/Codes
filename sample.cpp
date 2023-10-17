// #include<iostream>
#include<bits/stdc++.h>
using namespace std;


// int tzero(int n){
//     int count = 0;
//     for(int i = 5;i<=n/i;i*=5){
//         count+=n/i;
//     }
//     return count;
// }
// int main(){
//     cout<<tzero(5);
//     return 0;
// }

// int main(){
//     string str1,str2;
//     getline(cin,str1);
//     getline(cin,str2);
//     string str3 = str1 + str2;
//     set<char> s;
//     for(char& ch : str3) {
//       s.insert(ch);
//    }
//     cout<<s.size();
//     return 0;
// }

// class Solution {
// public:
//     vector<int> removeDuplicates(vector<int>& nums) {
//         int j = 1;
//           vector<int> result;
//         for(int i =1;i<nums.size();i++){
//             if(nums[i] != nums[i-1]){
//                 nums[j] = nums[i];
//                 j++;
//                 result.push_back(nums[i]);
//             }
//         }
//         return result;
//     }
// };

// int main(){
//   Solution obj;
//   vector<int> nums = {1,1,2};
 
//     // for (int i = 1; i <= 5; i++)
//         // nums.push_back(i);
//   obj.removeDuplicates(nums);
//   cout<<obj.removeDuplicates(nums);
//   return 0;
// }


// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     vector<int> removeDuplicates(vector<int>& nums) {
//         vector<int> result;
//         if (nums.empty())
//             return result;
        
//         result.push_back(nums[0]);
//         for (int i = 1; i < nums.size(); i++) {
//             if (nums[i] != nums[i - 1]) {
//                 result.push_back(nums[i]);
//             }
//         }
        
//         return result;
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> nums = {1, 1, 2};
//     vector<int> result = obj.removeDuplicates(nums);
  
//     for (int num : result) {
//         cout << num << " ";
//     }
  
//     return 0;
// }


// #include <iostream>
// #include <vector>
// using namespace std;
 
// int main() {
//    //initialize a vector
//    vector<int> v { 4, 0, 4, 2, 8, 2, 2 };
    
//    //remove duplicates
//    for(int i=1;i<v.size();i++){
//        for(int k = 0;k<i;k++){
//            if(v.at(i) == v.at(k)){
//                v.erase(v.begin()+i);
//                --i;
//                break;
//            }
//        }
//    }
 
//    //print vector elements
//    for(auto& element: v) {
//       cout << element << "  ";
//    }
// }


// class Solution {
// public:
//     string addBinary(string a, string b) {
//         // int m = a.size()-1;
//         // int n = b.size()-1;
//         if(b.size()>a.size()) swap(a,b);
//         while(b.size()<a.size()){
//             b = "0" + b;
//         }
//         int carry = 0;
//         string result = "";
//         for(int i =b.size()-1;i>=0;--i){
//             if(a[i] == '1' && b[i] == '1'){
//                 if(carry == 0)
//                 result = "0" + result;
//                 else result = "1" + result;
//                 carry = 1;
//             }
//             else if(a[i] == '0' && b[i] == '0'){
//                 if(carry == 0)
//                 result = "0" + result;
//                 else{
//                     result = "1" + result;
//                     carry = 0;
//                 }
//             }
//             else if((a[i] == '1' && b[i] == '0') || (a[i] == '0' && b[i] == '1')){
//                 if(carry == 0) result = "1" + result;
//                 else result = "0" + result;
//             }

//         }
//         if(carry == 1) result = "1" + result;
//         return result;
//     }
// };

// int main(){
//     string a = "11";
//     string b = "1";
//     Solution myobj;
//     cout<<myobj.addBinary(a,b);
// }



// class Solution {
// public:
//     int mySqrt(int x) {
//         long long int low = 1;
//         long long int high = x;
//         long long root;
//         if(x==0 || x==1){
//             return x;
//         }
//         while(low<=high){
//         long long int mid = low + ((high - low)/2);
//             if(mid*mid==x){
//                 return mid;
//             }
//             else if(mid*mid<x){
//                 root = mid;
//                 low = mid + 1;
//             }
//             else{
//                 high = mid - 1;
//             }
//             // mid = low + (high-low)/2;
//         }
//         return root;
//     }
// };

// int main(){
//     int x = 8;
//     Solution myobj;
//     cout<<myobj.mySqrt(x);
// }


// C++ program for above approach
// #include <bits/stdc++.h>
// using namespace std;

// /* This function sets the values of
// *x and *y to non-repeating elements
// in an array arr[] of size n*/
// vector<int> get2NonRepeatingNos(int nums[], int n)
// {

// 	sort(nums, nums + n);

// 	vector<int> ans;
// 	for (int i = 0; i < n - 1; i = i + 2) {
// 		if (nums[i] != nums[i + 1]) {
// 			ans.push_back(nums[i]);
// 			i = i - 1;
// 		}
// 	}

// 	if (ans.size() == 1)
// 		ans.push_back(nums[n - 1]);

// 	return ans;
// }

// /* Driver code */
// int main()
// {
// 	int arr[] = { 2, 3, 7, 9, 11, 2, 3, 11 };
// 	int n = sizeof(arr) / sizeof(*arr);
// 	vector<int> ans = get2NonRepeatingNos(arr, n);
// 	cout << "The non-repeating elements are " << ans[0]
// 		<< " and " << ans[1];
// }

void get2NonRepeatingNos(int arr[], int n, int* x, int* y)
{
	int Xor = arr[0];
	int set_bit_no;
	int i;
	*x = 0;
	*y = 0;
	for (i = 1; i < n; i++)
		Xor ^= arr[i];
	set_bit_no = Xor & ~(Xor - 1);
	for (i = 0; i < n; i++) {
		if (arr[i] & set_bit_no)
			*x = *x ^ arr[i];
		else {
			*y = *y ^ arr[i];
		}
	}
}

/* Driver code */
int main()
{
	int arr[] = { 2, 3, 7, 9, 11, 2, 3, 11 };
	int n = sizeof(arr) / sizeof(*arr);
	int* x = new int[(sizeof(int))];
	int* y = new int[(sizeof(int))];
	get2NonRepeatingNos(arr, n, x, y);
	cout << "The non-repeating elements are " << *x
		<< " and " << *y;
}

// This code is contributed by rathbhupendra
