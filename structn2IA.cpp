#include <iostream>
#include <string>

using namespace std;

int main() {
    struct musig1 {
        string Artista;
        string Título;
        float Duración;
        float Tamaño;
    };

    musig1* puntero = new musig1[10];

    int elecsion, CanMusig = 0;
    string CansionTmporal;

    do {
        cout << "1. Añadir una nueva canción\n";
        cout << "2. Mostrar el título de todas las canciones\n";
        cout << "3. Buscar canción\n";
        cout << "4. Finalizar\n";
        cin >> elecsion;
        cin.ignore();  // Consumir el '\n' restante

        switch (elecsion) {
            case 1:
                if (CanMusig < 10) {
                    cout << "Ingrese el nombre del Artista:\n";
                    getline(cin, puntero[CanMusig].Artista);

                    if (puntero[CanMusig].Artista.empty()) {
                        cout << "\nEl tipo de dato no es válido\n";
                        break;
                    }

                    cout << "Ingrese el Título de la canción:\n";
                    getline(cin, puntero[CanMusig].Título);

                    if (puntero[CanMusig].Título.empty()) {
                        cout << "\nEl tipo de dato no es válido\n";
                        break;
                    }

                    cout << "Ingrese la Duración (seg):\n";
                    cin >> puntero[CanMusig].Duración;

                    if (puntero[CanMusig].Duración <= 0) {
                        cout << "\nEl tipo de dato no es válido\n";
                        break;
                    }

                    cout << "Ingrese Tamaño de la canción (KB):\n";
                    cin >> puntero[CanMusig].Tamaño;

                    if (puntero[CanMusig].Tamaño <= 0) {
                        cout << "\nEl tipo de dato no es válido\n";
                        break;
                    }

                    CanMusig++;
                } else {
                    cout << "No se pueden añadir más canciones, la lista está llena.\n";
                }
                break;

            case 2:
                if (CanMusig == 0) {
                    cout << "No hay canciones guardadas.\n";
                } else {
                    cout << "Canciones guardadas:\n";
                    for (int i = 0; i < CanMusig; ++i) {
                        cout << " " << i + 1 << ". " << puntero[i].Título << endl;
                    }
                }
                break;

            case 3:
                if (CanMusig == 0) {
                    cout << "No hay canciones para buscar.\n";
                } else {
                    cout << "Ingrese el nombre de la canción que desea buscar:\n";
                    getline(cin, CansionTmporal);

                    bool found = false;
                    for (int i = 0; i < CanMusig; ++i) {
                        if (CansionTmporal == puntero[i].Título) {
                            found = true;
                            cout << "\nArtista: " << puntero[i].Artista << endl;
                            cout << "Duración: " << puntero[i].Duración << " seg" << endl;
                            cout << "Tamaño: " << puntero[i].Tamaño << " KB" << endl;
                            break;
                        }
                    }
                    if (!found) {
                        cout << "Canción no encontrada.\n";
                    }
                }
                break;

            case 4:
                cout << "Finalizado\n";
                break;

            default:
                cout << "Opción no válida. Por favor, intenta de nuevo.\n";
                break;
        }
    } while (elecsion != 4);

    delete[] puntero;  // Liberar la memoria asignada dinámicamente

    return 0;
}
