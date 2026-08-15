#include <iostream>

using namespace std;
string toCamelCase(string s){
    string result = "";
    bool capitalize = false;

    for(char ch : s){
        if(ch == '-' || ch == '_'){
            capitalize = true;
        }
        else{
            if(capitalize){
                result += toupper(ch);
                capitalize = false;
            }
            else{
                result += ch;
            }
        }
    }
    return result;
}
int main() {
    string str = "the-stealth_warrior";
    // cout << "Enter the string: ";
    // getline(cin, str);

    string result = toCamelCase(str);
    cout << "String after converting: " << result;
    return 0;
}