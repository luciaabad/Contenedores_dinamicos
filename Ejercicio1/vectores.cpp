//
// Created by Lucia Abad on 18/12/24.
//

#include "vectores.h"
#include <vector>
#include <iostream>

void recorrerVectorConIteradores() {
    std::vector<int> numeros = {10, 20, 30, 40, 50};

    for(std::vector<int>::iterator it = numeros.begin(); it != numeros.end(); ++it) {
        std::cout << *it << std::endl;
    }
}

