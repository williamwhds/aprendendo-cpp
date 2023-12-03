#include <iostream>

int main () {
    int a = 1;
    int b = 0;
    int c;

    for (int i = 0; i != 21; i++) {
        c = a + b;
        std::cout << i << " - " << c << std::endl;

        a = b;
        b = c; 
    }
    return 0;
}