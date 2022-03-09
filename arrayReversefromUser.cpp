#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
void reverseArray(int arr[],int start,int end)
{
    while(start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
int main()
{
    int n,arr[50];
    cout<<"Enter the total number of elements in the array: ";
    cin>>n;
    cout<<endl;
    
    cout<<"enter elements in the array:";
    for(int j=0;j<n;j++)
    {
        cin>>arr[j];
    }

    printArray(arr,n);
    reverseArray(arr,0,n-1);
    cout<<"Reversed array is"<<endl;
    printArray(arr,n);
    return 0;
}