#include <iostream>

int main() {
    int in1, in2;
    std::cin >> in1 >> in2;

    int i = in1 > in2 ? in2 : in1;
    int j = in1 > in2 ? in1 : in2;
    while (i <= j) {
        std::cout << i << "\n";
        i++;
    }
    return 0;
}
