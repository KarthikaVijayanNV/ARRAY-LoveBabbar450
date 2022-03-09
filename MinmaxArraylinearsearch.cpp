#include<iostream>
using namespace std;
struct  Pair
{
    int min;
    int max;
};
struct Pair getMinMax(int arr[],int n)
{
    struct Pair minmax;
    int i;


    if(n==1)
    {
        minmax.min=arr[0];
        minmax.max=arr[0];
        return minmax;
    }





    if(arr[0]>arr[1])
    {
       minmax.max = arr[0];
       minmax.min = arr[1];
    }
    else
    {
        minmax.max = arr[1];
        minmax.min = arr[0];
    }





    for(i=2;i<n;i++)
    {
        if(arr[i]>minmax.max)
            minmax.max=arr[i];
        else if (arr[i]<minmax.min)
            minmax.min=arr[i];
    }
    return minmax;
}


int main()
{
int arr[]={2,45,89,4,8999,34};
int size=6;
struct Pair minmax= getMinMax(arr,size);
cout<<"Max num is: "<<minmax.max<<endl;
cout<<"Min num is: "<<minmax.min<<endl;
return 0;
}