#include "Matriz.h"

Matriz::Matriz(){

}

Matriz::Matriz(int det, int siz){
  determinante = det;
  size = siz;
}

Matriz::~Matriz(){

}

int Matriz::buscarDet(int** matrix){

}

int** Matriz::operator | (int** matrix){
  int** suma;
  for (int i = 0; i < matrix.size(); i++) {

  }
  return suma;
}

//incremento
int Matriz::operator ++ (int siz){
  int increase=0;
  for (int i = 0; i < matrix.size(); i++) {

  }
  return increase;
}

//decremento
int Matriz::operator -- (int siz){
  int decrease=0;
  for (int i = 0; i < matrix.size(); i++) {

  }
  return decrease;
}
