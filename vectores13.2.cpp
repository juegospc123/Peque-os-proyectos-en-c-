// Introducción a C++, Nacho Cabanes
// Ejemplo 05.06b:
// Matrices, lógica errónea (sin dar valor inicial)
#include <iostream>

int main() {
    int matriz[2][2];

    // Solicitar datos al usuario
    std::cout << "Ingrese los elementos de la matriz de 2x2:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << "Ingrese el elemento en la posición [" << i << "][" << j << "]: ";
            std::cin >> matriz[i][j];
        }
    }

    // Mostrar la matriz original
    std::cout << "\nMatriz original:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << "\n";
    }

    // Mostrar la traspuesta de la matriz
    std::cout << "\nTraspuesta de la matriz:\n";
    for (int j = 0; j < 2; j++) {
        for (int i = 0; i < 2; i++) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}

