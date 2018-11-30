#ifndef MATRIZ_H
#define MATRIZ_H
#include <string>

using std::string;

class Matriz{
  private:
    int size;
    int determinante;
    string nombre_mat;
    int** matriz;
  public:
    Matriz();

    ~Matriz();
    Matriz(int,int);
    int buscarDet(int**,int);

    int getSize();
    void setSize(int);
    
    //suma
    int** operator | (int**);
    //incremento
    int operator ++ (int);
    //decremento
    int operator -- (int);
    //mutliplicacion por escalar
    int operator < (int);
    //producto de Matrices
    int** operator & (int**);
    //suma dentro de espacio vectorial
    int** operator + (int**);
    //multiplicacion dentro de espacio vectorial
    int** operator * (int**);
};

#endif
