//reverse the vector(brute force method)

#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n=5;
	vector<int> vec= {10,20,30,40,50};
	
	for (int i =4; i>=0; i--){
		cout<< vec[i]<<" ";
	}

	return 0;
}


//two pointer approach

#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n=5;
	vector<int> vec= {10,20,30,40,50};
	int start = vec[0];
	int end = vec[n-1];

	while( start < end) {
		int temp = vec[start];
		vec[end] = vec[start];
		vec[start] = temp;

		start++;
		end--;
	}
	for(int i = vec.size() - 1; i >= 0; i--) {
		cout << vec[i] << " ";
	}
	return 0;
}
