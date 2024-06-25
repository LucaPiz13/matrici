//- leggere in input la dimensione (n) e il contenuto di una matrice quadrata (n x n), e verificare se è
//una matrice diagonale (cioè solamente gli elementi della diagonale principale possono essere diversi da 0)
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
		
		int d = 1; 
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i != j && matrix[i][j] != 0){
				d = 0;
			}
		}
		if(!d){

			break;
		}
	}
	  if (d) {
        std::cout << "La matrice è diagonale." << std::endl;
    } else {
        std::cout << "La matrice non è diagonale." << std::endl;
    }
	
}