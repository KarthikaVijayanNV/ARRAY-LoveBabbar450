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
    if(start>=end)
    return;
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    reverseArray(arr,start+1,end-1);
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    printArray(arr,6);
    reverseArray(arr,0,5);
    cout<<"The reversed array is"<<endl;
    printArray(arr,6);
    return 0;
}