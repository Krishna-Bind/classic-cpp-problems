//  **** Reversing an array with Brute Force Approach ***
#include <iostream>
using namespace std;
int reverseArray(int array[], int size){
    int start = 0; int end = size - 1;
    while(start < end){
        swap(array[start], array[end]);
        start++;
        end--;
    }
}
int main() {
    int array[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(array) / sizeof(array[0]);

    reverseArray(array, size);
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    return 0;
}