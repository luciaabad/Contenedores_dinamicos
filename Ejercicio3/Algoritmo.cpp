//
// Created by Lucia Abad on 18/12/24.
//

#include "Algoritmo.h"
#include <iostream>
#include <vector>
#include <algorithm>

void ordenarYBuscarMaximo() {
    std::vector<int> numeros = {50, 20, 60, 10, 30, 40};
    std::sort(numeros.begin(), numeros.end());

    for(int num : numeros) {
        std::cout << num << std::endl;
    }

    int maxNum = *std::max_element(numeros.begin(), numeros.end());
    std::cout << "Número máximo: " << maxNum << std::endl;
}