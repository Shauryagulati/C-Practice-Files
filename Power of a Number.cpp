#include<bits/stdc++.h>
using namespace std;

int power(int n, int x)
{
    if(n==0) return 1;
    
    else if(n%2 == 0){
        int y = pow(x, n/2);
        return y*y;
    }
    
    else
        return (x * pow(x, n-1));
}

int main()
{
    int n, x;
    cout<<"Enter the Number: ";
    cin>>x;
    cout<<"Enter the Power: ";
    cin>>n;
    
    cout<<"The Result is: "<<power(n, x);
}