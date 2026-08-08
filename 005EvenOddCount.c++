//Count even and odd numbers

#include <iostream>
using namespace std;
int main() {
	int arr[]= {1,2,3,4,5,6,7,8,9};
	int n = 9; 
	int evencount = 0;
	int oddcount = 0;

	for(int i=0; i<n; i++) {
		if(arr[i] % 2 == 0)
			evencount += 1;          // this also plus one in count
	}
	for(int i =0; i<n; i++) {
		if(arr[i]%2 !=0)
			oddcount ++;            // this also increse count with one (1)
	}
	cout<< "Even no: " << evencount <<endl;
	cout<< "Odd no: " << oddcount;

	return 0;
}
