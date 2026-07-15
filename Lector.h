#ifndef LECTOR_H
#define LECTOR_H

#include <iostream>
using namespace std;

struct Lector {
    int codigo;
    string nombre;
    string correo;
    string facultad;
};

void agregarLector(Lector lec[100], int&n);
void mostrarLectores(Lector lec[100], int n);
void buscarLector(Lector lec[100], int n);
void editarLector(Lector lec[100], int n);
void eliminarLector(Lector lec[100], int &n);

#endif
