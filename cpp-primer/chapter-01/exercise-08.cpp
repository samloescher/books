#include <iostream>

int main() {
    std::cout << "/*";
    std::cout << "*/";
    std::cout << /* "*/" */; // Comments escape String
    std::cout << /* "*/" /* "/*" */; // As before, however prints " /* "
    return 0;
}
