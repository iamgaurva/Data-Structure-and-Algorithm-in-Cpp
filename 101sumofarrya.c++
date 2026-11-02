#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,3,4,5};
    int n = 4;
    int sum = 0;
    
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    
    cout << sum;


    return 0;
}
