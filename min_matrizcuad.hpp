#include <iostream>
#include "matrizTypes.hpp"
#ifndef MINMATCUAD_HPP
#define MINMATCUAD_HPP

class min_matrizcuad : public cuadMatriz{
    private:
        short calcMinSize(std::string word);
    public:
        min_matrizcuad(std::string passwd);
        ~min_matrizcuad() {};
        friend std::ostream& operator<<(std::ostream& os, const min_matrizcuad& obj){
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
