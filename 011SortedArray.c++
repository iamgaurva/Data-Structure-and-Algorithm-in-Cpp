//Check wheater an array is osrted or not


#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int arr[] = {2, 4, 6, 8, 10};

    bool sorted = true;

    for(int i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            sorted = false;
            break;
        }
    }

    if(sorted)
        cout << "Sorted";
    else
        cout << "Not Sorted";

    return 0;
}
