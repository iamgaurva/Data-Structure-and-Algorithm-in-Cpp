//insert element at given postion.

#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n=5;
	vector<int> vec= {10,20,30,40,50};

	cout<<	vec.size() << endl;
	vec.insert(vec.begin() + 2, 99);

	
	for (int i =0; i <vec.size(); i++){
		cout<< vec[i]<<" ";
	}

	return 0;
}
