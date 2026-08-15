// Simple C++ program to check whether a number is palindrome or not
#include <iostream>

using namespace std;
void isPalindrome(int num){
    int originalNum = num;
    int digit;
    int reversedNum = 0;

    while(num > 0){
        digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    if(originalNum == reversedNum){
        cout << originalNum << " is a palindrome number.";
    }
    else{
        cout << originalNum << " is not palindrome number.";
    }
}
int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    isPalindrome(num);
    return 0;
}