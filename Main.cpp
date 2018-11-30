#include "Matriz.h"
#include <iostream>

using namespace std;

int main(){
  int resp = 0;
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

      }break;

      case 2:{

      }break;

      case 3:{

      }break;

      case 4:{

      }break;

      default:
        cout<<"Saliendo..."<<endl;
        resp = 5;
    }
  } while(resp!=5);
  return 0;
}
