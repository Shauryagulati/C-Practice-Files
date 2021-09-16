#include<bits/stdc++.h>
using namespace std; 

void printArray(int arr[], int size)
{
    for(int i=0; i< size; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

void reverseArray(int arr[], int start, int end)
{
    while(start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    int arr[] = {2,3,6,8,10};
    int size = sizeof(arr)/ sizeof(arr[0]);
    
    printArray(arr, size);
    reverseArray(arr, 0, size-1);
    printArray(arr, size);
    return 0;
}
