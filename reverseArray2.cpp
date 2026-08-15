// ***Reversing an array of strings and its elements ***
#include <iostream>

using namespace std;
int main() {
    string array[] = {"krishna", "villain", "devil"};
    int size = sizeof(array) / sizeof(array[0]);

    // Reversing whole array
    int start = 0; int end = size - 1;
    while(start < end){
        string temp = array[start];
        array[start] = array[end];
        array[end] = temp;

        start++;
        end--;
    }

    // Reversing each element
    for(int i = 0; i < size; i++){
        int s = 0; int e = array[i].length() - 1;

        while(s < e){
            char temp = array[i][s];
            array[i][s] = array[i][e];
            array[i][e] = temp;

            s++;
            e--;
        }
    }

    // Printing every elements
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    return 0;
}