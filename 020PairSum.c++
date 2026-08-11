// Pair sum  brute force 

#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    for(int i = 0; i < nums.size(); i++) {
        for(int j = i + 1; j < nums.size(); j++) {
            if(nums[i] + nums[j] == target) {
                cout << nums[i] << " " << nums[j];
                return 0;
            }
        }
    }
    cout << "No pair found";

    return 0;
}

// optimize solution (two pointer)


#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> nums = {2, 7, 11, 15};

    int target = 9;

    int left = 0;
    int right = nums.size() - 1;

    while(left < right) {

        int sum = nums[left] + nums[right];

        if(sum == target) {
            cout << nums[left] << " " << nums[right];
            return 0;
        }
        else if(sum > target) {
            right--;
        }
        else {
            left++;
        }
    }

    cout << "No pair found";

    return 0;
}
