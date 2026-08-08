//Even odd count in vector

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n=7;
	vector<int> vec= {1,2,3,4,5,6,7};
	int evencount =0;
	int oddcount =0;

	for( int i =0; i<n; i++) {
		if (vec[i] % 2 == 0) {
			evencount++;
		} else {
			oddcount ++;
		}
	}
	cout << evencount<<endl<<oddcount;
	return 0;
}
