// Simple C++ program to check whether a number is palindrome or not
#include <iostream>

using namespace std;
void isPalindrome(int num){
    int originalNum = num;
    int reversedNum = 0;
    while(num > 0){
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    if(originalNum == reversedNum){
        cout << originalNum << " is a palindrome." << endl;
    } else {
        cout << originalNum << " is not a palindrome." << endl;
    }

}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    isPalindrome(num);
    return 0;
}