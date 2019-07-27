#include <iostream>

int main() {
    std::cout << "Enter a set of numbers to accumulate\n";
    int i = 0, sum = 0;
    while (std::cin >> i) {
        sum += i;
    }
    std::cout << "The total is " << sum;
    return 0;
}
