#include "Material.h"

void agregarMaterial(Material mat[100], int& n) {
    cout << "\n--- AGREGAR MATERIAL ---\n";

    cout << "Codigo: ";
    cin >> mat[n].codigo;

    cin.ignore(); 

    cout << "Titulo: ";
    getline(cin, mat[n].titulo);

    cout << "Autor: ";
    getline(cin, mat[n].autor);

    cout << "Anio de publicacion: ";
    cin >> mat[n].anioPublicacion;

    mat[n].prestado = false;

    n++;

    cout << "Material agregado correctamente.\n";
}

void mostrarMateriales(Material mat[100], int n) {
    cout << "\n--- LISTA DE MATERIALES ---\n";

    if (n == 0) {
        cout << "No hay materiales registrados.\n";
        return;
    }

    for (int i = 0; i < n; i++) {
        cout << "\nMaterial #" << i + 1 << endl;
        cout << "Codigo: " << mat[i].codigo << endl;
        cout << "Titulo: " << mat[i].titulo << endl;
        cout << "Autor: " << mat[i].autor << endl;
        cout << "Anio: " << mat[i].anioPublicacion << endl;
        cout << "Estado: " << (mat[i].prestado ? "Prestado" : "Disponible") << endl;
    }
}

void buscarMaterial(Material mat[100], int n) {
    int cod;
    cout << "\nIngrese codigo a buscar: ";
    cin >> cod;

    for (int i = 0; i < n; i++) {
        if (mat[i].codigo == cod) {
            cout << "\nMaterial encontrado:\n";
            cout << "Titulo: " << mat[i].titulo << endl;
            cout << "Autor: " << mat[i].autor << endl;
            cout << "Anio: " << mat[i].anioPublicacion << endl;
            cout << "Estado: " << (mat[i].prestado ? "Prestado" : "Disponible") << endl;
            return;
        }
    }

    cout << "Material no encontrado.\n";
}

void editarMaterial(Material mat[100], int n) {
    int cod;
    cout << "\nIngrese codigo a editar: ";
    cin >> cod;

    for (int i = 0; i < n; i++) {
        if (mat[i].codigo == cod) {

            cin.ignore();

            cout << "Nuevo titulo: ";
            getline(cin, mat[i].titulo);

            cout << "Nuevo autor: ";
            getline(cin, mat[i].autor);

            cout << "Nuevo anio: ";
            cin >> mat[i].anioPublicacion;

            cout << "Material actualizado.\n";
            return;
        }
    }

    cout << "Material no encontrado.\n";
}

void eliminarMaterial(Material mat[100], int& n) {
    int cod;
    cout << "\nIngrese codigo a eliminar: ";
    cin >> cod;

    for (int i = 0; i < n; i++) {
        if (mat[i].codigo == cod) {

            for (int j = i; j < n - 1; j++) {
                mat[j] = mat[j + 1];
            }

            n--;
            cout << "Material eliminado.\n";
            return;
        }
    }

    cout << "Material no encontrado.\n";
}

void ordenarMaterial(Material mat[100], int n) {
    Material temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (mat[i].codigo > mat[j].codigo) {
                temp = mat[i];
                mat[i] = mat[j];
                mat[j] = temp;
            }
        }
    }

    cout << "Materiales ordenados por codigo.\n";
}