#include<iostream>
#include<string>

std::string mark_char(const std::string& str, char c) {
    
    std::string result;
    
    for (int i = 0, j = 0; i < str.length(); i++, j++) {
        if(str[i] == c){
            result += "\\" + c + '\\';
            j += 2;
        } else {
            result[j] = str[i];
        }
    }  
    
    return result;
}

int main () {
    std::string str;
    char c;

    std::getline(std::cin, str);
    std::cin >> c;
    
    std::cout << mark_char(str, c) << std::endl;
}
