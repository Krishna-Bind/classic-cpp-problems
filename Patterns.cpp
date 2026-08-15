// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// #include <iostream>

// int main() {
//     int n;
//     std::cout << "Enter the value for n: ";
//     std::cin >> n;

//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= n; j++){
//             std::cout << j << " ";
//         }
//         std::cout << "\n";
//     }
//     return 0;
// }



// * * * *
// * * * *
// * * * *
// * * * *
// #include <iostream>

// int main() {
//     int n;
//     std::cout << "Enter the value for n: ";
//     std::cin >> n;

//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= n; j++){
//             std::cout << "* ";
//         }
//         std::cout << "\n";
//     }
//     return 0;
// }



// A B C D
// A B C D
// A B C D
// A B C D
// #include <iostream>

// int main() {
//     int n;
//     // char character = 'A';
//     std::cout << "Enter the value for n: ";
//     std::cin >> n;
//     for(int i = 1; i <= n; i++){
//         char character = 'A';
//         for(int j = 1; j <= n; j++){
//             std::cout << character << " ";
//             character++;
//         }
//         std::cout << "\n";
//     }
//     return 0;
// }



// 1 2 3 4
// 5 6 7 8 
// 9 10 11 12
// #include <iostream>

// int main() {
//     int n;
//     std::cout << "Enter the value for n: ";
//     std::cin >> n;
//     int num = 1;
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= n; j++){
//             std::cout << num << " ";
//             num++;
//         }
//         std::cout << "\n";
//     }
//     return 0;
// }



// *
// * *
// * * *
// * * * *
// #include <iostream>

// int main() {
//     int n;
//     std::cout << "Enter the value for n: ";
//     std::cin >> n;

//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < i + 1; j++){
//             std::cout << "* ";
//         }
//         std::cout << "\n";
//     }
//     return 0;
// }



// 1
// 2 2
// 3 3 3
// 4 4 4 4
// #include <iostream>

// int main() {
//     int n;
//     std::cout << "Enter the value for n: ";
//     std::cin >> n;

//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < i + 1; j++){
//             std::cout << (i + 1) << " ";
//         }
//         std::cout << "\n";
//     }
//     return 0;
// }



// A
// B B
// C C C 
// D D D D
// #include <iostream>

// int main() {
//     int n;
//     std::cout << "Enter the value for n: ";
//     std::cin >> n;
//     char character = 'A';
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < (i + 1); j++){
//             std::cout << character << " ";
//         }
//         std::cout << "\n";
//         character++;
//     }
//     return 0;
// }


// 1
// 1 2
// 1 2 3
// 1 2 3 4
// #include <iostream>

// int main() {
//     int n;
//     std::cout << "Enter the value for n: ";
//     std::cin >> n;

//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= i; j++){
//             std::cout << j << " ";
//         }
//         std::cout << "\n";
//     }
//     return 0;
// }



// 1
// 2 1 
// 3 2 1 
// 4 3 2 1
// #include <iostream>

// int main() {
//     int n;
//     std::cout << "Enter the value for n: ";
//     std::cin >> n;

//     for(int i = 0; i < n; i++){
//         for(int j = (i+1); j > 0; j--){
//             std::cout << j << " ";
//         }
//         std::cout << "\n";
//     }
//     return 0;
// }



// 1
// 2 3
// 4 5 6
// 7 8 9 10
// #include <iostream>

// int main() {
//     int n;
//     std::cout << "Enter the value for n: ";
//     std::cin >> n;
//     int num = 1;
    
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < (i+1); j++){
//             std::cout << num << " ";
//             num++;
//         }
//         std::cout << "\n";
//     }
//     return 0;
// }



// A
// B C
// D E F
// G H I J
// #include <iostream>

// int main() {
//     int n;
//     std::cout << "Enter the value for n: ";
//     std::cin >> n;

//     char character = 'A';
//     for(int i = 0; i < n; i++){
//         for(int j = (i + 1); j > 0; j--){
//             std::cout << character++ << " ";
//         }
//         std::cout << "\n";
//     }
//     return 0;
// }



// A
// B B
// C C C 
// D D D D 
// #include <iostream>

// int main() {
//     int n;
//     std::cout << "Enter the value for n: ";
//     std::cin >> n;

//     char character = 'A';
//     for(int i = 0; i < n; i++){
//         for(int j = (i + 1); j > 0; j--){
//             std::cout << character << " ";

//         }
//         std::cout << "\n";
//         character++;
//     }
//     return 0;
// }



// 1111
//  222
//   33
//    4
// #include <iostream>

// int main() {
//     int n;
//     std::cout << "Enter the value for n: ";
//     std::cin >> n;

//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < (i+1); j++){
//             std::cout << " ";
//         }

//         for(int j = 0; j < (n - i); j++){
//             std::cout << (i+1);
//         }
//         std::cout << "\n";
//     }
//     return 0;
// }



// AAAA
//  BBB
//   CC
//    D
// #include <iostream>

// int main() {
//     int n;
//     std::cout << "Enter the value for n: ";
//     std::cin >> n;
//     char ch = 'A';

//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < i + 1; j++){
//             std::cout <<" ";
//         }
//         for(int j = 0; j < n - i; j++){
//             std::cout << ch;
//         }
//         ch++;
//         std::cout << "\n";
//     }
//     return 0;
// }



//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1
// #include <iostream>

// int main() {
//     int n;
//     std::cout << "Enter the value for n: ";
//     std::cin >> n;

//     for(int i = 0; i < n; i++){
//         // spaces -> j < (n - i - 1)
//         for(int j = 0; j < (n - i - 1); j++){
//             std::cout << " ";
//         }
//         // nums -> i + 1
//         for(int j = 1; j <= (i + 1); j++){
//             std::cout << j;
//         }
//         // nums2 
//         for(int j = i; j > 0; j--){
//             std::cout << j;
//         }
//         std::cout << "\n";
//     }
//     return 0;
// }



// ~~~ just practices ~~~~~
// #include <iostream>

// int main() {
//     int n;
//     std::cout << "Enter the value for n: ";
//     std::cin >> n;
//     // int num = 1;
//     char ch = 'A';
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j < (i+1); j++){
//             std::cout << ch << " ";
//             // num++;
//             // ch++;
//         }
//         std::cout << "\n";
//         // num++;
//         ch++;
//     }
//     return 0;
// }



// #include <iostream>

// int main() {
//     int n;
//     std::cout << "Enter the value for n: ";
//     std::cin >> n;

//     char ch = 'A';

//     for(int i = 0; i < n; i++){
//         for(int j = (i+1) ; j > 0; j--){
//             std::cout << ch << " ";
//             ch++;
//         }
//         std::cout << "\n";
//         // ch++;
//     }
//     return 0;
// }