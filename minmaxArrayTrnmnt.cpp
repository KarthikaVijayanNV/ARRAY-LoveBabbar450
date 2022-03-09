#include<iostream>
using namespace std;
struct Pair
{
    int min;
    int max;
};
struct Pair getMinMax(int arr[],int low,int high)
{
    struct Pair minmax,mml,mmr;
    int mid;


    if(low==high)
    {
        minmax.min=arr[low];
        minmax.max=arr[high];
        return minmax;
    }



    if(high==low+1)
    {
        if(arr[low]>arr[high])
        {
            minmax.max=arr[low];
            minmax.min=arr[high];
        }
        else
        {
            minmax.max=arr[high];
            minmax.min=arr[low];
        }
        return minmax;
    }




    mid=(low+high)/2;
    mml=getMinMax(arr,low,mid);
    mmr=getMinMax(arr,mid+1,high);

    
    if(mml.min>mmr.min)
        minmax.min=mmr.min;
    else 
        minmax.min=mml.min;
    
    if(mml.max>mmr.max)
    {
        minmax.max=mml.max;
    }
    else 
    {
        minmax.max=mmr.max;
    }
    return minmax;

}

int main()
{
    int arr[]={3,267,90,678,345,9000};
    int size=6;
    struct Pair minmax=getMinMax(arr,0,size-1);
    cout<<"The max number is: "<<minmax.max<<endl;
    cout<<"The min num is: "<<minmax.min<<endl;
    return 0;
}