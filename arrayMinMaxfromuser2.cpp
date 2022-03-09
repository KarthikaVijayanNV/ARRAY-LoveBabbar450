#include<bits/stdc++.h>
using namespace std;


//array min max elements from user array using Search in pair method

struct Pair
{
    int min;
    int max;
};

struct Pair getMinMax(int arr[],int n)
{
    struct Pair minmax;
    int i;

    if(n%2==0) //even num of elements
    {
      if(arr[0]<arr[1])
      {
        minmax.min=arr[0];
        minmax.max=arr[1];
      }
      else 
      {
        minmax.max=arr[0];
        minmax.min=arr[1];
      }
      i=2;
    }
    else // odd number of elements
         {
             minmax.max=arr[0];
             minmax.min=arr[0];
            i=1;
         }
         


         while(i<n-1)
         {
             if(arr[i]<arr[i+1])
             {
                 if(arr[i]<minmax.min)
                     minmax.min=arr[i];

                 if(arr[i+1]>minmax.max)
                    minmax.max=arr[i+1];
             }

            else 
            {
                if(arr[i]>minmax.max)
                   minmax.max=arr[i];

                if(arr[i+1]<minmax.min)
                   minmax.min=arr[i+1];
            }
            i+=2;
         }
     return minmax;
}






int main()
{
    int arr[100],size;
    cout<<"Enter the size of array: "<<endl;
    cin>>size;
    cout<<"Enter array elements: "<<endl;
    for (int j = 0; j < size; j++)
    {
        cin>>arr[j];
    }
    
    struct Pair minmax=getMinMax(arr,size);
    cout<<"The min is: "<<minmax.min<<endl;
    cout<<"The max is: "<<minmax.max<<endl;
    return 0;

}