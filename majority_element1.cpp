// Simple C++ program to find the majority element(greater than n/2 times) in an array
#include <iostream>

using namespace std;
int majorityElement(int array[], int size) {
    for(int i = 0; i < size; i++){
        int val = array[i];
        int freq = 0;

        for(int j = 0; j < size; j++){
            if(array[j] == val){
                freq++;
            }
        }
        if(freq > size / 2){
            return val;
        }
    }
    return -1;
}
int main() {
    int array[] = {2, 2, 3, 1, 4};
    int size = sizeof(array) / sizeof(array[0]);
    int result = majorityElement(array, size);
    cout << "The Majority Element is: " << result;
    return 0;
}