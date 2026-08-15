// Container with Most Water problem(2-pointer approach)  `` Leetcode Problem - 11 ``

#include <iostream>

using namespace std;
auto mostWater(int array[], int size){
    int maxWater = 0;
    int left = 0; int right = size-1;

    while(left < right){
        int width = right - left;
        int height = min(array[left], array[right]);
        int currentWater = width * height;
        maxWater = max(currentWater, maxWater);
        
        array[left] < array[right] ? left++ : right--;
    }
    // cout << "Max water with area: " << maxWater;
    return maxWater;
}
int main() {
    int array[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int size = sizeof(array) / sizeof(array[0]);

    cout << "Max water with area: " << mostWater(array, size) << endl;
    return 0;
}