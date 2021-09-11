#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int x){
	int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
int main() {
	int n, x, arr[10];
	cout<<"How many integers in an array: ";
	cin>>n;
	
	for(int i=0; i<n; i++)
	    cin>>arr[i];
	    
	cout<<"Which no to find: ";
	cin>>x;
	int index = linearSearch(arr, n, x);
	if(index == -1) 
		cout<<"Not in the array";
	else
		cout<<"Present in array at position: "<<index+1;
	return 0;
}