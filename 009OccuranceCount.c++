//Count occurrences of a number

#include <iostream>
using namespace std;
int main(){
    
    int arr[]={2,5,2,7,2,8};
    int n=6;
    int a=2;
    int count = 0;
    
    for(int i=0; i<n; i++){
        if(arr[i] == a){
            count ++;
        }
    }
    cout << count;
    
    return 0;
}
