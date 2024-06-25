//- leggere in input la dimensione (n) e il contenuto di una matrice quadrata (n x n), e verificare se è
//una matrice triangolare superiore (cioè tutti gli elementi sotto la diagonale principale sono 0)


#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Inserisci la dimensione della matrice: ";
    std::cin >> n;

    std::vector<std::vector<int>> matrix(n, std::vector<int>(n));

    std::cout << "Inserisci gli elementi della matrice:" << std::endl;
    

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> matrix[i][j];
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
			std::cout << matrix[i][j] << " ";
	 	}
     	std::cout << std::endl;
	}

    int t = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (matrix[i][j] != 0) {
                t = 0;
                break;
            }
        }
        if (!t) {
            break;
        }
    }

    if (t) {
        std::cout << "La matrice è una matrice triangolare" << std::endl;
    } else {
        std::cout << "La matrice non è una matrice triangolare " << std::endl;
    }

    return 0;
}



