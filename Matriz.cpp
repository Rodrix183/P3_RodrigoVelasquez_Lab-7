#include "Matriz.h"
#include <iostream>

using std::cout;
using std::endl;

Matriz::Matriz(){

}

Matriz::Matriz(string name,int det, int siz){
  nombre_mat = name;
  determinante = det;
  size = siz;
}

Matriz::~Matriz(){

}

int Matriz::getSize(){
  return size;
}
void Matriz::setSize(int s){
  size = s;
}

string Matriz::getNombre(){
  return nombre_mat;
}
void Matriz::setNombre(string na){
  nombre_mat = na;
}

int Matriz::buscarDet(int** matrix){
  int pos = 0;
  int neg = 0;
  if (size == 2) {
    this->determinante = (matrix[0][0]*matrix[1][1])-(matrix[0][1]*matrix[1][0]);
  }else if(size == 3){
    //metodo sarrus
    pos = (matrix[0][0]*matrix[1][1]*matrix[2][2])+(matrix[0][1]*matrix[1][2]*matrix[2][0])
    +(matrix[0][1]*matrix[1][2]*matrix[2][0]);

    neg = (matrix[2][0]*matrix[1][1]*matrix[0][2])+(matrix[2][1]*matrix[1][2]*matrix[0][0])
    +(matrix[2][2]*matrix[1][0]*matrix[0][1]);

    this->determinante = pos - neg;
  }else{
    cout<<"Tamano no valido"<<endl;
  }
  return this->determinante;
}

//suma
int** Matriz::operator | (int**){
  int** num;
  return num;
}
//incremento
int Matriz::operator ++ (int){
  int num = 0;
  return num;
}
//decremento
int Matriz::operator -- (int){
int num = 0;
return num;
}
//mutliplicacion por escalar
int Matriz::operator < (int){
  int num = 0;
  return num;
}
//producto de Matrices
int** Matriz::operator & (int**){
  int** num;
  return num;
}
//suma dentro de espacio vectorial
int** Matriz::operator + (int**){
  int** num;
  return num;
}
//multiplicacion dentro de espacio vectorial
int** Matriz::operator * (int**){
  int** num;
  return num;
}
