//- leggere in input la dimensione della matrice (n), generare e stampare la matrice identità n x n
#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Inserisci la dimensione della matrice: ";
    std::cin >> n;

    
    std::vector<std::vector<int>> matrice(n, std::vector<int>(n));
    for (int i = 0; i < n; ++i) {
        matrice[i][i] = 1; 
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << matrice[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
