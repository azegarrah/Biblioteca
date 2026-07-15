#include <iostream>
#include "Lector.h"
using namespace std;

void agregarLector(Lector Lec[], int& n) {
        cin >> lec[n].codigo;
        cin >> lec[n].nombre;
        cin >> lec[n].correo;
        cin >> lec[n].facultad;
        n++;
}

void mostrarLectores(Lector lec[], int n) {
    for (int i = 0; i < n; i++) {
        cout << lec[i].codigo << " ";
        cout << lec[i].nombre << " ";
        cout << lec[i].correo << " ";
        cout << lec[i].facultad << endl;
    }
}

void buscarLector(Lector lec[], int n) {
    int codigo;
    cin >> codigo;

    for (int i = 0; i < n; i++) {
        if (lec[i].codigo == codigo) {
            cout << lec[i].codigo << " ";
            cout << lec[i].nombre << " ";
            cout << lec[i].correo << " ";
            cout << lec[i].facultad << endl;
            return;
        }
    }
    cout << "Lector no encontrado." << endl;
}

void editarLector(Lector lec[], int n) {
    int codigo;
    cin >> codigo;

    for (int i = 0; i < n; i++) {
        if (lec[i].codigo == codigo) {
            cin >> lec[i].nombre;
            cin >> lec[i].correo;
            cin >> lec[i].facultad;
            return;
        }
    }
}

void eliminarLector(Lector lec[], int& n) {
    int codigo;
    cin >> codigo;

    for (int i = 0; i < n; i++) {
        if (lec[i].codigo == codigo) {
            for (int j = i; j < n - 1; j++) {
                lec[j] = lec[j + 1];
            }
            n--;
            return;
        }
    }
}