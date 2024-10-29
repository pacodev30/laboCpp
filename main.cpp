#include <iostream>

void tableMultiplication( const int table, int max = 10)
{
    std::cout << "-- Table de " << table << " -- " << std::endl;

    for (int i = 0; i <= max; i++) {
        if(i == 0)
            continue;
        std::cout << i << "x" << table << " = " << i * table << std::endl;
    }
}

int main()
{
    tableMultiplication(7);
    tableMultiplication(8, 12);

    return 0;
}
