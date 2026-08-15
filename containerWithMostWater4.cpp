// Container with most Water problem(2-pointer approach)  `` Leetcode Problem - 11 ``

#include <iostream>
#include <vector>

using namespace std;
auto mostWater(vector<int> &array){
    int left = 0; int right = array.size() - 1;
    int maxWater = 0;

    while(left < right){
        int width = right - left;
        int height = min(array[left], array[right]);
        int currentWater = width * height;

        maxWater = max(maxWater, currentWater);

        array[left] < array[right] ? left++ : right--;
    }
    // cout << "Max water with area: " << maxWater;
    return maxWater;
}
int main() {
    vector<int> array = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "Max water with area: " << mostWater(array) << endl;
    return 0;
}