// ~~~~ decimal to binary change ~~~~
#include <iostream>

int decToBinary(int decNum){
    int ans = 0, pow = 1;

    while(decNum > 0){
        int rem = decNum % 2;
        decNum /= 2;

        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}
int main() {
    // int decNum;
    // std::cout << "Enter the value in decimal number system: ";
    // std::cin >> decNum;
    // std::cout << "The value of " << decNum << " in binary is: " << decToBinary(decNum);

    for(int i = 1; i <= 100; i++){
        std::cout << i << " in binary is: " << decToBinary(i) << "\n";
    }
    return 0;
}