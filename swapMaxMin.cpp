
// ~~~~~!!!!!! Swaping the maximum and minimum number of an array !!!!!~~~~~
#include <iostream>
using namespace std;

void swapMaxMin(int array[], int size){
    int maxIndex = 0; int minIndex = 0;

    for(int i = 0; i < size; i++){
        if(array[i] > array[maxIndex]){
            maxIndex = i;
        }
        if(array[i] < array[minIndex]){
            minIndex = i;
        }
    }
    // swapping min and max nums
    int temp;
    temp = array[maxIndex];
    array[maxIndex] = array[minIndex];
    array[minIndex] = temp;
}
int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(array) / sizeof(array[0]);

    swapMaxMin(array, size);
    cout << "Array after swapping min & max nums: ";

    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    return 0;
}