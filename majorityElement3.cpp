// **** Brute Force Approach ****
#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> vec){
    int size = vec.size();

    for(int val: vec){
        int freq = 0;

        for(int element: vec){
            if(element == val){
                freq++;
            }
        }
        if(freq > size/2){
            return val;
        }
    }
    // return -1;
}
int main() {
    vector<int> vec = {1, 2, 3, 1, 1};
    int ans = majorityElement(vec);
    cout << ans;
    return 0;
}