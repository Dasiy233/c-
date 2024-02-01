#include <iostream>
#include <unordered_map>
using namespace std;
int romanToInt(std::string s) {
    std::unordered_map<char, int> romanMap = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int result = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (i < s.length() - 1 && romanMap[s[i]] < romanMap[s[i + 1]]) {
            result -= romanMap[s[i]];
        } else {
            result += romanMap[s[i]];
        }
    }
    return result;
}

int main() {
    std::string roman = "XXVII"; // 27
    int integer = romanToInt(roman);
    std::cout << "The integer representation of " << roman << " is: " << integer << std::endl;
    system("pause");
    return 0;
}
