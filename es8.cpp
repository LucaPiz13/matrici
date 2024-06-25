//- leggere in input le dimensioni della matrice (righe e colonne), leggere due matrici e calcolarne lasomma


#include <iostream>
#include <vector>

int main() {
    int righe, colonne;


    std::cout << "Inserisci il numero di righe delle matrici: ";
    std::cin >> righe;
    std::cout << "Inserisci il numero di colonne delle matrici: ";
    std::cin >> colonne;

  
    std::cout << "Inserisci gli elementi della prima matrice:" << std::endl;
    std::vector<std::vector<int>> matrice1(righe, std::vector<int>(colonne));
    for (int i = 0; i < righe; i++) {
        for (int j = 0; j < colonne; j++) {
            std::cin >> matrice1[i][j];
        }
    }
        std::cout << "Matrice originale 1:" << std::endl;
      for (int i = 0; i < righe; i++) {
        for (int j = 0; j < colonne; j++) {
			std::cout << matrice1[i][j] << " ";
	 	}
     	std::cout << std::endl;
	}

    std::cout << "Inserisci gli elementi della seconda matrice:" << std::endl;
    std::vector<std::vector<int>> matrice2(righe, std::vector<int>(colonne));
    for (int i = 0; i < righe; i++) {
        for (int j = 0; j < colonne; j++) {
            std::cin >> matrice2[i][j];
        }
    }
