#include "matriz.hpp"
#ifndef MATRIZTYPES_HPP
#define MATRIZTYPES_HPP

class cuadMatriz : public matriz {
    public:
        cuadMatriz(short size) : matriz(size, size){};
        ~cuadMatriz(){};
        friend std::ostream& operator<<(std::ostream& os, const cuadMatriz& obj){
            for (int i = 0; i < obj.getRows(); i++) {
                for (int j = 0; j < obj.getColums(); j++) {
                    os << obj.content[i][j] << " ";
                }
                os << std::endl;
            }
            return os;
        };
};

#endif