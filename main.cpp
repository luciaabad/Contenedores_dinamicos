//
// Created by Lucia Abad on 18/12/24.
//
#include <istream>

#include "Ejercicio1/vectores.h"
#include "Ejercicio2/contenedores.h"
#include "Ejercicio3/Algoritmo.h"
#include "Ejercicio4/calculo.h"
#include "Ejercicio5/Moderno.h"
#include "Ejercicio6/Boost.h"
#include <iostream>

int main() {
    // Ejecutar cada ejercicio
    std::cout << "Ejercicio 1: Vector e Iteradores\n";
    recorrerVectorConIteradores();
    std::cout << "\nEjercicio 2: Contenedores Estándar y Secuencias\n";
    operacionesPila();
    std::cout << "\nEjercicio 3: Algoritmos\n";
    ordenarYBuscarMaximo();
    std::cout << "\nEjercicio 4: Cálculo Numérico\n";
    operacionesValarray();
    std::cout << "\nEjercicio 5: C++ Moderno\n";
    operacionesCppModernas();
    std::cout << "\nEjercicio 6: Introducción a Boost\n";
    pruebaBoost();

    return 0;
}