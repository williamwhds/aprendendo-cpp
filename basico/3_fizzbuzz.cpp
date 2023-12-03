#include <iostream>
#include <string>

int main () {
    for (int i = 1; i < 501 ; i++) {
        std::string str = "";
        if (i % 3 == 0) {
        str += "Fizz";
        }

        if (i % 5 == 0) {
            str += "Buzz";
        }

        if (str == "") {
            std::cout << i << std::endl;
        } else {
            std::cout << str << std::endl;
        }
    }
    return 0;    
}
