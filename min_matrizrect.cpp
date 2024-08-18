#include "min_matrizrect.hpp"

short min_matrizrect::calcMinRows(std::string word, short passwordSize) {
    unsigned int len =  static_cast<unsigned int>(word.length());
    float numRows = static_cast<float>(len)/static_cast<float>(passwordSize);
    short minRows = numRows - static_cast<float>(static_cast<short>(numRows)) > 0 ? static_cast<short>(numRows) + 1 : static_cast<short>(numRows);
    return minRows;
}

min_matrizrect::min_matrizrect(std::string word, short passwordSize) : matriz(calcMinRows(word, passwordSize), passwordSize) {
    unsigned int len = static_cast<unsigned int>(word.length());
    unsigned int counter = 0;
    for (int i = 0; i < this->getRows(); i++) {
        for (int j = 0; j < this->getColums(); j++)
        {
            this->content[i][j] = counter < len ? static_cast<short>(word[counter]) : static_cast<short>(' ');
            counter++;
        }
    }
}