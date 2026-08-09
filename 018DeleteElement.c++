//delete element

#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n=5;
	vector<int> vec= {10,20,30,40,50};

	cout<<	vec.size() << endl;
	vec.erase(vec.begin()  + 2);
	
	for (int i =0; i <vec.size(); i++){
		cout<< vec[i]<<" ";
	}

	return 0;
}
