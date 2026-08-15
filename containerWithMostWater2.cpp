// Container with Most Water problem(Brute Force approach) `` Leetcode Problem - 11 ``

#include <iostream>
#include <vector>
using namespace std;
int maxArea(vector<int>& array){
    int maxWater = 0;

    for(int i = 0; i < array.size(); i++){
        for(int j = i+1; j < array.size(); j++){
            int width = j-i;
            int height = min(array[i], array[j]);
            int currentWater = width * height;

            maxWater = max(maxWater, currentWater);
        }
    }
    // cout << "Max water with area: " << maxWater << endl;
    return maxWater;
}
int main() {
    vector<int> array = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "Max water with area: " << maxArea(array) << endl;
    return 0;
}