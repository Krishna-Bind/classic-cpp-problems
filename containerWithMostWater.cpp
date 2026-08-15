// Container with Most Water problem(Brute Force approach)  `` Leetcode Problem - 11 ``

#include <iostream>

using namespace std;
auto mostWater(int array[], int size){
    int maxWater = 0;

    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++){
            int width = (j - i);
            int height = min(array[i], array[j]);
            int currentWater = width * height;
            maxWater = max(currentWater, maxWater);
        }
    }
    cout << "Max water with area: " << maxWater;
    return maxWater;
}
int main() {
    int array[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int size = sizeof(array)/sizeof(array[0]);

    mostWater(array, size);
    return 0;
}