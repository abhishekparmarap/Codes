#include<iostream >
using namespace std;

int binarySearch(int arr[], int left, int right, int x) {
  while (left <= right) {
    int mid = left + (right - left) / 2;

    if (arr[mid] == x) {
      return mid;
    } else if (arr[mid] < x) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }
 // C:\Users\Abhishek\Vscode1\code\codePlaygroud\DSA\class\binarysearchtree.cpp
  return -1;
}

int main() {
  int num;
  int output;

  int myarr[10] = {1,3,6,7,9,10,15,17,19,22};
  cout << "\n enter an element to search: ";
  cin >> num;

  output = binarySearch(myarr, 0, 9, num);

  if (output == -1) {
    cout << "\n No Match Found";
  } else {
    cout << "\n Match found at position: " << output;
  }

  return 0;
}