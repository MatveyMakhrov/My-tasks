#include <iostream>
#include <cmath>
 
int main () {
    int a(0), x(0), y(0);
    for(int i = 0; i < 5; i += 1) {
        for(int j = 0; j < 5; j += 1) {
            std::cin >> a;
            if (a == 1) {
                x = j + 1;
                y = i + 1;
            }
        }
    }
    std::cout << abs(3 - x) + abs(3 - y);
}
