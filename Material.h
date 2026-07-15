#ifndef MATERIAL_H
#define MATERIAL_H

#include <iostream>
using namespace std;

struct Material {
    int codigo;
    string titulo;
    string autor;
    int anioPublicacion;
    bool prestado;
};

void agregarMaterial(Material mat[100], int& n);
void mostrarMateriales(Material mat[100], int n);
void buscarMaterial(Material mat[100], int n);
void editarMaterial(Material mat[100], int n);
void eliminarMaterial(Material mat[100], int& n);
void ordenarMaterial(Material mat[100], int n);

#endif