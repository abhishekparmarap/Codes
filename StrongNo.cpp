#include<iostream>
using namespace std;

int main(){
    int n = 145;
    // cin>>n;
	long sum = 0;
for(int temp = n; temp > 0; temp =  temp / 10 )
	{
		int factorial = 1;  
		int reminder = temp % 10;
		
		for (int i = 1; i <= reminder; i++)
		{
			factorial = factorial * i;
		}
		sum = sum + factorial;
	}	
    if(sum == n){
        cout<<"Strong no.";
    }
    else{
        cout<<"Not a strong no.";
    }
    return 0;
}