#include <iostream>
#include "Sales_item.h"

int main() {

    Sales_item item, total;
    int count = 1;
    std::string current_isbn, previous_isbn;

    std::cin >> item;
    total = item;
    current_isbn = item.isbn();

    while(std::cin >> item){
        previous_isbn = current_isbn;
        current_isbn = item.isbn();
        if(current_isbn == previous_isbn){
            count++;
            total += item;
        }else{
            std::cout << count << " X " << total << std::endl;
            count = 1;
            total = item;
        }
    }

    std::cout << count << " X " << total << std::endl;

    return 0;
}
