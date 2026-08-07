//Two pointer - reverse an array

#include <iostream>
using namespace std;

void reverseArray(int arr[], int n){
    int start = 0;
    int end= n-1;
    while(start<end){
        swap(arr[start], arr[end]);
        start ++;
        end --;
    }
}

int main() {
    int n=5;
    int arr[]={1,2,3,4,5};
    reverseArray(arr, n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
