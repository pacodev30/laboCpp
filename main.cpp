#include <iostream>

int main()
{
    /*
     *  std::out => Affichage standard (en mémoire tampon)
     *  std::err => Erreurs (affichage direct)
     *  std::clog => Journalisation (en mémoire tampon)
     *  std::endl => Retour à la ligne + flush
     *  std:flush => flush
     */

    std::cout << "Hello Stella " << "How are you ?" << std::endl;
    std::cout << "By";
    return 0;
}