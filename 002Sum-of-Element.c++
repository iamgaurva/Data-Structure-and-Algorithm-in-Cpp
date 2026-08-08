//Find the sum of all elements or till n

#include <iostream>
using namespace std;

int main(){
    int arr[]={5, 2, 3, 4, 1, 6, 9, 7, 8};
    int n;
    int sum=0;
    cin>>n;
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
    }
     cout <<sum;
    
}
