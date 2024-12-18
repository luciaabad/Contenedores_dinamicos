cmake_minimum_required(VERSION 3.29)
project(Contenedores_dinamicos)

set(CMAKE_CXX_STANDARD 14)

add_executable(Contenedores_dinamicos
    main.cpp
        Ejercicio1/vectores.cpp
        Ejercicio2/contenedores.h
        Ejercicio2/contenedores.cpp
        Ejercicio3/Algoritmo.cpp
        Ejercicio3/Algoritmo.h
        Ejercicio4/calculo.h
        Ejercicio4/calculo.cpp
        Ejercicio5/Moderno.h
        Ejercicio5/Moderno.cpp
        Ejercicio6/Boost.cpp)
