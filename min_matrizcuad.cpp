#include "min_matrizcuad.hpp"
#include <math.h>

short min_matrizcuad::calcMinSize(std::string word){
    float raiz = sqrtf(static_cast<float>(word.length()));
    short size = (raiz - static_cast<float>(static_cast<int>(raiz)) > 0.0) ? static_cast<short>(raiz) + 1 : static_cast<short>(raiz);
    return size;
}

min_matrizcuad::min_matrizcuad(std::string passwd): cuadMatriz(this->calcMinSize(passwd)){
    unsigned int len = static_cast<unsigned int>(passwd.length());
    unsigned int counter = 0;
    for (short i = 0; i < this->getRows(); i++) {
        for (short j = 0; j < this->getColums(); j++) {
            this->content[i][j] = counter < len ? static_cast<short>(passwd[counter]) : static_cast<short>(' ');
            counter++;
        }
    }
}