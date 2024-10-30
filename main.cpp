#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(nullptr)); // initialise la fonction sur le temps actuel
    int mysteryNumber = rand() % 100 + 1; // +1 pour inclure le max

    constexpr int maxTry = 6;
    int response;

    for (int i = 0; i < maxTry; i++)
    {
        cout << "Your number in range [0 - 100] : " << std::endl;
        cin >> response;
        cin.ignore();

        if (response == mysteryNumber) {
            cout << "Yes you got it! ;)" << endl;
            break;
        }
        if (response > mysteryNumber) {
            cout << "You are up" << endl;
        } else {
            cout << "You are down" << endl;
        }

        if (i == maxTry - 1) {
            cout << "--------" << endl;
            cout << "You lose :( the number was " << mysteryNumber << endl;
            break;
        }
    }
    cin.ignore();
    return 0;
}