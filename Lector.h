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

extern Lector lectores[100];
extern int cantLectores;

void agregarLector();
void mostrarLectores();
void buscarLector();
void editarLector();
void eliminarLector();

#endif // LECTRO_H
