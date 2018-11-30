#include "Matriz.h"
#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::vector;
using std::endl;
//using std::begins;
//using std::erase;
int** createMatrix(int);
int** initMatrix(int**,int);
void printMatrix(int**,int);
void deleteMatrix(int**&,int);

int main(){
  int resp = 0;
  string nombr = "";
  int posBorrar = 0;
  int opOperacion = 0;

  int posMat1 = 0;
  int posMat2 = 0;
  Matriz* matrix = new Matriz();
  vector <Matriz*> lista_Matrices;
  do {
    cout<<"1. Crear Matrices"<<endl
    <<"2. Listar Matrices"<<endl
    <<"3. Eliminar Matrices"<<endl
    <<"4. Operar Matrices"<<endl
    <<"5. Salir"<<endl
    <<"Ingrese una opcion "<<endl;
    cin>>resp;
    switch (resp) {
      case 1:{
        int orden=0;

        cout<<"De que orden es la matriz: "<<endl;
        cin>>orden;
        int** arreglo = createMatrix(orden);
        if (orden==2) {
          cout<<"Ingrese nombre de la matriz"<<endl;
          cin>>nombr;

          arreglo = initMatrix(arreglo,2);
          lista_Matrices.push_back(new Matriz(nombr,0,orden,arreglo));
          //deleteMatrix(arreglo,2);
          cout<<"Matriz creada exitosamente"<<endl;
        }else if(orden==3){
          cout<<"Ingrese nombre de la matriz"<<endl;
          cin>>nombr;

          arreglo = initMatrix(arreglo,3);
          lista_Matrices.push_back(new Matriz(nombr,0,orden,arreglo));
          //deleteMatrix(arreglo,3);
          cout<<"Matriz creada exitosamente"<<endl;
        }else{
          cout<<"Tamano no valido! "<<endl;
        }
      }break;

      case 2:{
        for (int i = 0; i < lista_Matrices.size(); i++) {
          cout<<i<<") "<<lista_Matrices.at(i)->getNombre()<<endl;
        }
        cout<<"Ingrese matriz"<<endl;
        cin>>posBorrar;
        printMatrix(lista_Matrices.at(posBorrar)->getMatriz(),2);
      }break;

      case 3:{
        //eliminar
        for (int i = 0; i < lista_Matrices.size(); i++) {
          cout<<i<<") "<<lista_Matrices.at(i)->getNombre()<<endl;
        }
        cout<<"Ingrese matriz a eliminar"<<endl;
        cin>>posBorrar;
        lista_Matrices.erase(lista_Matrices.begin()+posBorrar,lista_Matrices.begin()+posBorrar+1);
      }break;

      case 4:{
        //operaciones master race
        cout<<"1. Suma"<<endl
        <<"2. Incremento"<<endl
        <<"3. Decremento"<<endl
        <<"4. Multiplicacion por Escalar"<<endl
        <<"5. Producto entre Matrices"<<endl
        <<"6. Suma dentro del Espacio Vectorial"<<endl
        <<"7. Multiplicacion dentro del Espacio Vectorial"<<endl
        <<"Ingrese una operacion"<<endl;
        cin>>opOperacion;
        switch (opOperacion) {
          case 1:{
            //matriz1
            for (int i = 0; i < lista_Matrices.size(); i++) {
              cout<<i<<") "<<lista_Matrices.at(i)->getNombre()<<endl;
            }
            cout<<"Ingrese matriz 1: "<<endl;
            cin>>posMat1;

            //matriz2
            for (int i = 0; i < lista_Matrices.size(); i++) {
              cout<<i<<") "<<lista_Matrices.at(i)->getNombre()<<endl;
            }
            cout<<"Ingrese matriz 2: "<<endl;
            cin>>posMat2;

            if (lista_Matrices.at(posMat1)->getSize() == lista_Matrices.at(posMat2)->getSize()) {
              //sumar
              int** array = lista_Matrices.at(posMat1)->getMatriz();
              int** array2 = lista_Matrices.at(posMat2)->getMatriz();
              int Suma = 0;
              for (int i = 0; i < lista_Matrices.at(posMat1)->getSize(); i++) {
                for (int j = 0; j < lista_Matrices.at(posMat1)->getSize(); j++) {
                  Suma = array[i][j] + array2[i][j];
                  cout<<" "<<Suma;
                }
                cout<<endl;
              }
              cout<<endl;
            }else{
              cout<<"Tamanos distintos"<<endl;
            }

          }break;

          case 2:{
            //incremento
            for (int i = 0; i < lista_Matrices.size(); i++) {
              cout<<i<<") "<<lista_Matrices.at(i)->getNombre()<<endl;
            }
            cout<<"Ingrese matriz"<<endl;
            cin>>posBorrar;

            int** array = lista_Matrices.at(posBorrar)->getMatriz();

            matrix->buscarDet(array);


          }break;

          case 3:{
            //decremento
            for (int i = 0; i < lista_Matrices.size(); i++) {
              cout<<i<<") "<<lista_Matrices.at(i)->getNombre()<<endl;
            }
            cout<<"Ingrese matriz"<<endl;
            cin>>posBorrar;
          }break;

          case 4:{

          }break;

          case 5:{

          }break;

          case 6:{

          }break;

          case 7:{

          }break;

          default:
            cout<<"Operacion no valida"<<endl;
        }
      }break;

      default:
        cout<<"Saliendo..."<<endl;
        resp = 5;
    }
  } while(resp!=5);
  return 0;
}
int** createMatrix(int s){
  int** retVal = NULL;

  retVal = new int*[s];

  for (int i = 0; i < s; i++) {
    retVal[i] = new int[s];
  }

  return retVal;
}
int** initMatrix(int** mtx,int sz){

  for (int i = 0; i < sz; i++) {
    for (int j = 0; j < sz; j++) {
      int num = 0;
      cout<<"Ingrese numero: ";
      cin>>num;
      mtx[i][j] = num;
    }
  }
  return mtx;
}
void printMatrix(int** mtx,int sz){
  for (int i = 0; i < sz; i++) {
    for (int j = 0; j < sz; j++) {
      cout<<" "<<mtx[i][j];
    }
    cout<<endl;
  }
  cout<<endl;
}
void deleteMatrix(int**& mtx,int sz){
  for (int i = 0; i < sz; i++) {
    delete[] mtx[i];
    mtx[i] = NULL;
  }

  delete[] mtx;
  mtx = NULL;
}
