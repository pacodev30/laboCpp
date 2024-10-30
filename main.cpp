#include <iostream>
#include <_stdlib.h>
using namespace std;

int main()
{
    srand(time(0));
    constexpr int maxTry = 6;
    int response;

    for (int i = 0; i < maxTry; i++)
    {
        constexpr int mysteryNumber = rand() % 101;

        cout << "Your number in range [0 - 100] : " << std::endl;
        cin >> response;
        cin.ignore();

        if (response == mysteryNumber) {
            cout << "You got it! ;)" << endl;
            break;
        }
        if (response > mysteryNumber) {
            cout << "You are up" << endl;
        } else {
            cout << "You are down" << endl;
        }

        if (i == maxTry - 1) {
            cout << "You lose :(" << endl;
        }
    }
    cin.ignore();
    return 0;
}