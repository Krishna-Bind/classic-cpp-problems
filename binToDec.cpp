
// ~~~~~ binary to decimal change ~~~~
#include <iostream>

int binToDecimal(int binNum){
    int ans = 0, pow = 1;

    while(binNum > 0){
        int rem = binNum % 10;
        ans += (rem * pow);
        binNum /= 10;
        pow *= 2;
    }
    return ans;
}
int main() {
    int binNum;
    std::cout << "Enter the value in Binary: ";
    std::cin >> binNum;

    std::cout << "The value of " << binNum << " in decimal is: " << binToDecimal(binNum);
    return 0;
}