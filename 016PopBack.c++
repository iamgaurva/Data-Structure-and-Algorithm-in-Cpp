//delete the last elemtn and print the remainig vector

#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n=7;
	vector<int> vec= {1,2,3,4,5,6,7};
	vec.pop_back( );
	
	for (int i =0; i<vec.size();i++){
	    cout<< vec[i];
	}

    return 0;
}
