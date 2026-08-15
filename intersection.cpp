
// ~~~!!! Printing Intersection of two arrays !!!~~~
#include <iostream>
using namespace std;

void intersection(int array1[], int size1, int array2[], int size2){
    for(int i = 0; i < size1; i++){
        for(int j = 0; j < size2; j++){
            if(array1[i] == array2[j]){
                cout << array1[i] << " ";
                break;
            }
        }
    }
}
int main() {
    int array1[] = {1, 2, 3, 4, 5, 6};
    int array2[] = {4, 5, 6, 7, 8};
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);

    intersection(array1, size1, array2, size2);
    return 0;
}
