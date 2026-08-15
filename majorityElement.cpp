// **** majority element problem with Moore's voting algorithm ****
#include <iostream>
#include <vector>
using namespace std;
int majorityElement(vector<int> vec){
    int freq = 0; int ans = 0;
    int size = vec.size();
    for(int i = 0; i < size; i++){
        if(freq == 0){
            ans = vec[i];
        }
        if(ans == vec[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    return ans;
}
int main() {
    vector<int> vec = {1, 2, 1, 2, 1, 2, 1, 1, 1};
    int ans = majorityElement(vec);
    cout << ans;
    return 0;
}