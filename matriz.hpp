#include <iostream>
#ifndef MATRIZ_HPP
#define MATRIZ_HPP
class matriz {
private:
    short rows, columns;
protected:
    short **content;
public:
    matriz(short _rows, short _columns);
    short getRows() const;
    short getColums() const;
    virtual ~matriz();
};
#endif