#include <iostream>
#include "matriz.hpp"
#ifndef MINMATRECT_HPP
#define MINMATRECT_HPP

class min_matrizrect : public matriz {
    private:
        short calcMinRows(std::string word, short passwordSize);
    public:
        min_matrizrect(std::string word, short passwordSize);
        ~min_matrizrect() {};
        friend std::ostream& operator<<(std::ostream& os, const min_matrizrect& obj){
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