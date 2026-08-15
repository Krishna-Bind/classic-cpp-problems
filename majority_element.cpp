// Simple C++ program to find the majority element
#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums) {
    int count = 0;
    int candidate = 0;

    for (int num : nums) {
        if (count == 0) {
            candidate = num;
        }
        count += (num == candidate) ? 1 : -1;
    }

    return candidate;
}
int main() {
    vector<int> nums = {3, 2, 3};
    int result = majorityElement(nums);
    cout << "The majority element is: " << result << endl;
    return 0;
}