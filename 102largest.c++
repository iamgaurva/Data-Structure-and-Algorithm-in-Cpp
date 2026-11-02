#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,3,4,15,2,6};
    int n = 6;
    
    int largest = arr[0];
    
    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    
    cout << largest;


    return 0;
}
