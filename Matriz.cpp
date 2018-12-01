#include "Matriz.h"
#include <iostream>
#include <cmath>

using std::abs;
using std::cout;
using std::endl;

Matriz::Matriz(){

}

Matriz::Matriz(string name,int det, int siz,int** mtx){
  nombre_mat = name;
  determinante = det;
  size = siz;
  matriz = mtx;
}

Matriz::~Matriz(){

}

int** Matriz::getMatriz(){
  return matriz;
}
void Matriz::setMatriz(int** m){
  matriz = m;
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

int Matriz::buscarDet(int** matrix,int s){
  int pos = 0;
  int neg = 0;
  int d = 0;
  if (s == 2) {
    pos = matrix[0][0] * matrix[1][1];
    neg = matrix[0][1] * matrix[1][0];
    /*for (int i = 0; i < 2; i++) {
      for (int j = 0; j < 2; j++) {
        if (i == j) {
          pos *= matrix[i][j];
        }else if(){
          neg *= matrix[i][j];
        }
      }
    }*/
    //cout<<"Determinante: "<<this->determinante<<endl;
    d = pos - neg;
  }else if(s == 3){
    //metodo sarrus
    pos = (matrix[0][0]*matrix[1][1]*matrix[2][2])+(matrix[0][1]*matrix[1][2]*matrix[2][0])
    +(matrix[0][1]*matrix[1][2]*matrix[2][0]);

    neg = (matrix[2][0]*matrix[1][1]*matrix[0][2])+(matrix[2][1]*matrix[1][2]*matrix[0][0])
    +(matrix[2][2]*matrix[1][0]*matrix[0][1]);
    d = pos - neg;
  }else{
    //cout<<"Tamano no valido"<<endl;
  }
  return d;
}

//suma
int** Matriz::operator | (int**){
  int** num;
  return num;
}
//incremento
int Matriz::operator ++ (){
  int increase = 0;
int d = 0;
int s = 0;
int** mtx;
  increase = abs (d - s);
  for (int i = 0; i < s; i++) {
    for (int j = 0; j < s; j++) {
      mtx[i][j]+=increase;
      cout<<" "<<mtx[i][j];
    }
    cout<<endl;
  }
  cout<<endl;
  return increase;
}
//decremento
int Matriz::operator -- (){
  int decrease = 0;
int d = 0;
int s = 0;
int** mtx;
  decrease = abs (d - s);
  for (int i = 0; i < s; i++) {
    for (int j = 0; j < s; j++) {
      mtx[i][j]-=decrease;
      cout<<" "<<mtx[i][j];
    }
    cout<<endl;
  }
  cout<<endl;
  return decrease;
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
