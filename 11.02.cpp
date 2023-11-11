#include <iostream>
#include <vector>

std::vector<int> productoVectorial(std::vector<int>& vector1, std::vector<int>& vector2) {
    std::vector<int> resultado(3); // El producto vectorial en el espacio 3D tiene 3 componentes

    resultado[0] = vector1[1] * vector2[2] - vector1[2] * vector2[1];
    resultado[1] = vector1[2] * vector2[0] - vector1[0] * vector2[2];
    resultado[2] = vector1[0] * vector2[1] - vector1[1] * vector2[0];

    return resultado;
}

int main() {
    std::vector<int> vector1(3);
    std::vector<int> vector2(3);

    std::cout << "Ingrese las componentes del primer vector en el espacio (x, y, z): ";
    std::cin >> vector1[0] >> vector1[1] >> vector1[2];

    std::cout << "Ingrese las componentes del segundo vector en el espacio (x, y, z): ";
    std::cin >> vector2[0] >> vector2[1] >> vector2[2];

    std::vector<int> resultado = productoVectorial(vector1, vector2);

    std::cout << "El producto vectorial de los dos vectores es (" << resultado[0] << ", " << resultado[1] << ", " << resultado[2] << ")" << std::endl;

    return 0;
}
