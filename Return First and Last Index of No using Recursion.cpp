#include<bits/stdc++.h>
using namespace std;

int firstIndex(int A[], int size, int x, int currIndex)
{
    if(size == currIndex) return -1;
    if(A[currIndex] == x) return currIndex;
    return firstIndex(A, size, x, currIndex+1);
}

int lastIndex(int A[], int size, int x, int currIndex)
{
    if(size == currIndex) return -1;
    if(A[currIndex] == x) return currIndex;
    return lastIndex(A, size, x, currIndex-1);
}

int main()
{
    int A[]={2,3,5,6,2,4};
    int x = 2;
    int size = 5;
    
    cout<<firstIndex(A, size, x, 0)<<" "<<lastIndex(A, size, x, size-1);
}
