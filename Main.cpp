#include "Matriz.h"
#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::vector;
using std::endl;
//using std::begins;
//using std::erase;

int main(){
  int resp = 0;
  string nombr = "";
  int posBorrar = 0;
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
        if (orden==2) {
          cout<<"Ingrese nombre de la matriz"<<endl;
          cin>>nombr;
          lista_Matrices.push_back(new Matriz(nombr,0,orden));
          cout<<"Matriz creada exitosamente"<<endl;
        }else if(orden==3){
          cout<<"Ingrese nombre de la matriz"<<endl;
          cin>>nombr;
          lista_Matrices.push_back(new Matriz(nombr,0,orden));
          cout<<"Matriz creada exitosamente"<<endl;
        }else{
          cout<<"Tamano no valido! "<<endl;
        }
      }break;

      case 2:{
        for (int i = 0; i < lista_Matrices.size(); i++) {
          cout<<lista_Matrices.at(i)->getNombre()<<endl;
        }
      }break;

      case 3:{
        //eliminar
        for (int i = 0; i < lista_Matrices.size(); i++) {
          cout<<i<<") "<<lista_Matrices.at(i)->getNombre()<<endl;
        }
        cout<<"Ingrese matriz a eliminar"<<endl;
        cin>>posBorrar;
        //lista_Matrices.erase(lista_Matrices.begins()+posBorrar,lista_Matrices.begins()+y+1);
      }break;

      case 4:{
        //operaciones master race
      }break;

      default:
        cout<<"Saliendo..."<<endl;
        resp = 5;
    }
  } while(resp!=5);
  return 0;
}
