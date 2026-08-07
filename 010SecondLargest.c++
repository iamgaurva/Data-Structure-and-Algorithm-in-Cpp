//Second largest no of the array

#include <iostream>
using namespace std;

int main() {

    int n = 6;
    int arr[] = {5, 8, 2, 10, 7, 9};

    int largest = arr[0];
    int secondlargest = arr[1];

    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            secondlargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondlargest) {
            secondlargest = arr[i];
        }
    }

    cout << secondlargest;

    return 0;
}
