//  **** TWO SUM problem using BRUTE FORCE approach ****
#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> vec, int target){
    vector<int> ans;
    int size = vec.size();

    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if(vec[i] + vec[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}
int main() {
    vector<int> vec = {2, 7, 11, 15};
    cout << "Here is the list: ";
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
    cout << endl;
    int target;
    cout << "choose your target for TWO SUM: ";
    cin >> target;
    vector<int> ans = pairSum(vec, target);
    cout << ans[0] << ", " << ans[1] << endl;
    return 0;
}