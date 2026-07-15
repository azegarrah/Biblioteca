#include <iostream>
#include "Lector.h"
using namespace std;

void agregarLector(Lector Lec[], int& n) {
        cout << "Ingrese el codigo del lector: ";
        cin >> lec[n].codigo;
        cin.ignore();

        cout << "Ingrese el nombre del lector: ";
        getline(cin, lec[n].nombre);
        
        cout << "Ingrese el correo del lector: ";
        getline(cin, lec[n].correo);
        
        cout << "Ingrese la facultad del lector: ";
        getline(cin, lec[n].facultad);
        n++;
}

void mostrarLectores(Lector lec[], int n) {
    for (int i = 0; i < n; i++) {
        cout <<"Codigo: " << lec[i].codigo << endl;
        cout << "Nombre: " << lec[i].nombre << endl;
        cout << "Correo: " << lec[i].correo << endl;
        cout << "Facultad: " << lec[i].facultad << endl;
        cout << endl;
    }
}

void buscarLector(Lector lec[], int n) {
    int codigo;
    cout << "Ingrese el codigo del lector a buscar: ";
    cin >> codigo;
    for (int i = 0; i < n; i++) {
        if (lec[i].codigo == codigo) {
            cout << "Codigo: " << lec[i].codigo << endl;
            cout << "Nombre: " << lec[i].nombre << endl;
            cout << "Correo: " << lec[i].correo << endl;
            cout << lec[i].facultad << endl;
            return;
        }
    }
    cout << "Lector no encontrado." << endl;
}

void editarLector(Lector lec[], int n) {
    int codigo;
    cout << "Ingrese el codigo del lector a editar: ";
    cin >> codigo;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        if (lec[i].codigo == codigo) {
            cout << "Ingrese el nuevo nombre del lector: ";
            getline(cin, lec[i].nombre);
            cout << "Ingrese el nuevo correo del lector: ";
            getline(cin, lec[i].correo);
            cout << "Ingrese la nueva facultad del lector: ";
            getline(cin, lec[i].facultad);
            return;
        }
    }
}

void eliminarLector(Lector lec[], int& n) {
    int codigo;
    cout << "Ingrese el codigo del lector a eliminar: ";
    cin >> codigo;
    for (int i = 0; i < n; i++) {
        if (lec[i].codigo == codigo) {
            for (int j = i; j < n - 1; j++) {
                lec[j] = lec[j + 1];
            }
            n--;
            return;
            cout << "Lector eliminado." << endl;
            return;
        }
    }
}