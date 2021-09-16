#include<bits/stdc++.h>
using namespace std; 

void getMinMax(int arr[], int size)
{
    int maxx=arr[0];
    int minn=arr[0];
    for(int i=0; i< size; i++)
    {
        if(arr[i]>maxx)
            maxx=arr[i];
        if(arr[i]<minn)
            minn=arr[i];
    }
    cout<<maxx<<" "<<minn;
}

int main()
{
    int arr[] = {2,3,5,1,23,11,1};
    int size = sizeof(arr)/ sizeof(arr[0]);
    getMinMax(arr, size);
    return 0;
}