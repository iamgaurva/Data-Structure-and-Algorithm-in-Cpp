//Find the Largest Element

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n=5;
    vector<int> vec={4,2,5,6,1};
    int largest = vec[0];
    
    for( int i =0; i<n; i++){
        if (vec[0] < vec[i+1]){
            largest = vec[i+1];
        }
    }
    cout<<largest;
    return 0;
}
