#include <iostream>

int main() {
    int sum = 0;
    int i = 50;
    while (i <= 100) {
        sum += i;
        i++;
    }
    std::cout << "The sum from 50 to 100 is " << sum;
    return 0;
}
