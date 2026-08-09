//reverse the vector

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
