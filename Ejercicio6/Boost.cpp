//
// Created by Lucia Abad on 18/12/24.
//

#include "Boost.h"
#include <iostream>
#include <boost/lexical_cast.hpp>

void pruebaBoost() {
    std::string s = "12345";

    try {
        int i = boost::lexical_cast<int>(s);
        std::cout << "Número: " << i << std::endl;
    } catch(boost::bad_lexical_cast &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}