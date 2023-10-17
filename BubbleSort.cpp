#include<iostream>
using namespace std;

void swap(int *p, int *q){
    int temp =*p;
    *p=*q;
    *q=temp;
}
void BubbleSort(int a[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(&a[j], &a[j + 1]);
            }
        }
    }
}

int main()
{
    int a[] = {7, 8, 12, 10, 2};
    int n = sizeof(a) / sizeof(a[0]);
    cout<<"\n element of array before sorting : ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"  ";
    }

    BubbleSort(a, n);
    cout<<"\n element of array after sorting  : ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"  ";
    }
    return 0;
}

