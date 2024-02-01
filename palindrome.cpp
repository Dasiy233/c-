#include <iostream>
using namespace std;
#include <string>
#include <algorithm>

int main() {
    int num = 12345;
    
    // 使用 std::to_string() 将整数转换为字符串
    std::string strNum = std::to_string(num);
    
    // 输出转换后的字符串
    std::cout << "Converted string: " << strNum << std::endl;
           string strNum1=strNum; 
      std::reverse(strNum1.begin(), strNum1.end());

    // 输出逆置后的字符串
    std::cout << "Reversed string: " << strNum1 << std::endl;

    system("pause");
    return 0;
}
