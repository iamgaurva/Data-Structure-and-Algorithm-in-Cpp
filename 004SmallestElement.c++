//Find the smallest element in an array.

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    int smallest = arr[0];
    for(int i =1; i<n; i++){
    if(arr[i]<smallest)
        smallest = arr[i];
    }
     cout<<smallest;    
    return 0;
}
