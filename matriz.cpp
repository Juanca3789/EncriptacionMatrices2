#include "matriz.hpp"

matriz::matriz(short _rows, short _columns) {
    this->rows = _rows;
    this->columns = _columns;
    this->content = new short*[this->rows];
    for (short i = 0; i < this->rows; i++) {
        this->content[i] = new short[this->columns];
    }
}

short matriz::getRows() const {
    return this->rows;
}

short matriz::getColums() const {
    return this->columns;
}

matriz::~matriz() {
    for (short i = 0; i < rows; i++) {
        delete []this->content[i];
    }
    delete []this->content;
}