#include <iostream>

//     **
//    ****
//   ******
//  ********
// **********

int main()
{
    int fireSize{0};
    constexpr char SYMBOL{'*'};
    constexpr unsigned MIN{0};
    constexpr unsigned MAX{25};

    do {
        std::cout << "Enter a number in range [ " << MIN << "," << MAX << " ]" << std::endl;
        std::cin >> fireSize;
    } while (fireSize < MIN || fireSize > MAX);
    std::cout << std::endl;

    for (int i{0}; i < fireSize; i++) {
        for (int j{0}; j < fireSize -i; j++) {
            std::cout << " ";
        }
        for (int k{0}; k < 2 * i + 2; k++) {
            std::cout << SYMBOL;
        }
        std::cout << std::endl;
    }
    return 0;
}

