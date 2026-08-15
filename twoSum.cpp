//  **** TWO SUM problem with 2-pointer approach ****
#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> vec, int target){
    vector<int> ans;
    int size = vec.size();

    int start = 0; int end = size - 1;
    while(start < end){
        int pSum = vec[start] + vec[end];

        if(pSum > target){
            end--;
        }
        else if(pSum < target){
            start++;
        }
        else{
            ans.push_back(start);
            ans.push_back(end);
            return ans;
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
    cout << ans[0] << ", " << ans[1];
    return 0;
}