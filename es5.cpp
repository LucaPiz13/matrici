//- leggere in input le dimensioni della matrice (righe e colonne), generare una matrice casuale delle
//dimensioni date, e calcolarne la matrice trasposta (cioè la matrice ottenuta scambiando le righe con le colonne)

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

    std::cout << "Matrice originale:" << std::endl;
      for (int i = 0; i < righe; i++) {
        for (int j = 0; j < colonne; j++) {
			std::cout << matrice[i][j] << " ";
	 	}
     	std::cout << std::endl;
	}

    std::cout << "Matrice trasposta:" << std::endl;
    for (int j = 0; j < colonne; j++) {
        for (int i = 0; i < righe; i++) {
            std::cout << matrice[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

