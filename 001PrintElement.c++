//input an number and print array till that. or can print all element of an array

#include <iostream>
using namespace std;

int main(){
    int arr[]={10, 20, 30, 40, 50, 60, 70, 80, 90};
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cout << arr[i]<< " ";
    }
    
}
