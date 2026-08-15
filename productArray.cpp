// Product of Array Except Self problem with Optimal Approach(Leetcode Problem - 238)

#include <iostream>
#include <vector>
using namespace std;
auto productArray(vector<int> &array){
    int n = array.size();
    vector<int> ans(n, 1);
    vector<int> prefix(n, 1);
    vector<int> suffix(n, 1);

    // prefix
    for(int i = 1; i < n; i++){
        prefix[i] = prefix[i - 1] * array[i - 1];
    }

    // suffix
    for(int i = n - 2; i >= 0; i--){
        suffix[i] = suffix[i+1] * array[i+1];
    }

    // answer
    for(int i = 0; i < n; i++){
        ans[i] = prefix[i] * suffix[i];
    }

    return ans;
}
int main() {
    vector<int> array = {1, 2, 3, 4};
    vector<int> result = productArray(array);

    cout << "Output Vector: ";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}