// // C++ code to demonstrate working of none_of()
// #include<iostream>
// #include<algorithm> // for none_of()
// using namespace std;
// int main()
// {
// 	// Initializing array
// 	int ar[6] = {1, 2, 3, 4, 5, 6};

// 	// Checking if no element is negative
// 	none_of(ar, ar+6, [](int x){ return x<0; })?
// 		cout << "No negative elements" :
// 		cout << "There are negative elements";

// 	return 0;
// }


// C++ code to demonstrate working of copy_n()
// #include<iostream>
// #include<algorithm> // for copy_n()
// using namespace std;
// int main()
// {
// 	// Initializing array
// 	int ar[6] = {1, 2, 3, 4, 5, 6};

// 	// Declaring second array
// 	int ar1[6];

// 	// Using copy_n() to copy contents
// 	copy_n(ar, 6, ar1);

// 	// Displaying the copied array
// 	cout << "The new array after copying is : ";
// 	for (int i=0; i<6 ; i++)
// 	cout << ar1[i] << " ";

// 	return 0;
// }


// C++ code to demonstrate working of iota()
#include<iostream>
#include<numeric> // for iota()
using namespace std;
int main()
{
	// Initializing array with 0 values
	int ar[6] = {0};

	// Using iota() to assign values
	iota(ar, ar+6, 20);
 
	// Displaying the new array
	cout << "The new array after assigning values is : ";
	for (int i=0; i<6 ; i++)
	cout << ar[i] << " ";

	return 0;
}

