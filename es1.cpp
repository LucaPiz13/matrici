
//- leggere in input le dimensioni della matrice (righe e colonne), generare e stampare una matrice
//casuale delle dimensioni date

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int main() {
    int righe, colonne;

    std::cout << "Inserisci il numero di righe: ";
    std::cin >> righe;
    std::cout << "Inserisci il numero di colonne: ";
    std::cin >> colonne;

    std::srand(std::time(0));

    std::vector<std::vector<int>> matrice(righe, std::vector<int>(colonne));

    
    for (int i = 0; i < righe; i++) {
        for (int j = 0; j < colonne; j++) {
            matrice[i][j] = std::rand() % 100 + 1; 
        }
    }

    
    for (const auto& riga : matrice) {
        for (int valore : riga) {
            std::cout << valore << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
