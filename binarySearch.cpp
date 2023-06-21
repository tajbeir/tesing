#include<iostream>
using namespace std;

int binarySearch (int arr[], int n, int x)
{
    int low = 0, high = n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]==x)
            return mid;
        else if(arr[mid]<x)
            low= mid+1;
        else
            high=mid-1;
    }
    return -1;
}
int main()
{
    int arr[]= {11,22,30,33,40,44,55,60,66,77,80,88,99};
    int n= sizeof(arr)/sizeof(arr[0]);
    int x= 99;
    int result = binarySearch(arr,n,x);
    if(result==-1)
        cout<<"Element not present in array"<<endl;
    else
        cout<<"Element present in index"<<endl;
    return 0;
    cout<<"Tanbin Akhtar";
    cout<<"Jahidul Islam";
    cout<<"Tajbeir";
    cout<<"Project";
}
