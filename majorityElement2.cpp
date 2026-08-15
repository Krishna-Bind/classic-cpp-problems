//  Optimized way to solve majority element problem with o(n logn) time complexity
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majorityElement(vector<int> vec){
    int size = vec.size();

    sort(vec.begin(), vec.end());
    int freq = 1; int ans = vec[0];
    for(int i = 1; i < size; i++){
        if(vec[i] == vec[i-1]){
            freq++;
        }
        else{
            freq = 1;
            ans = vec[i];
        }
        if(freq > size/2){
            return ans;
        }
    }
    return ans;
}
int main() {
    vector<int> vec = {1, 2, 1, 2, 3, 2, 1, 1, 1};
    int ans = majorityElement(vec);
    cout << ans;
    return 0;
}