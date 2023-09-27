#include<iostream>
using namespace std;
# define top -1
# define max 10;
void push(int a[], int data)
{
if(top==max-1)
{
cout<<"Overflow";
}
else
{
top=top+1; a[top]=data;
}
}
void pop(int a[])
{
if(top==-1) {cout<<"underflow";}
else
{
top=top-1;
}
}
int main()
{
int a[max];
push(a, 10);///Insertion
push(a, 20);
push(a, 30);
pop(a);///deletion
pop(a);
return 0;
}