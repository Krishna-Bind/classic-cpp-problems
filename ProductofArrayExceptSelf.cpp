// Product of Array Except Self problem with Brute Force Approach(Leetcode Problem - 238)

#include <iostream>
#include <vector>

using namespace std;
vector<int> productArray(vector<int>& array){
    int n = array.size();
    vector<int> ans(n, 1);
    for(int i = 0; i < n; i++){
        int product = 1;
        for(int j = 0; j < n; j++){
            if(i != j){
                product *= array[j];
            }
        }
        ans[i] = product;
        // cout << "The product is: " << product << endl;
    }
    // cout << "The product is: " << product << endl;
    return ans;
}
int main() {
    vector<int> array = {1, 2, 3, 4};
    vector<int> result = productArray(array);

    cout << "Output Vector: ";
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    return 0;
}