#include<iostream>
using namespace std;
int main(){
    int opcion; //declaramos la opcion
    do{ //damos al usuario las opciones
        cout<<"Menu del juego"<<endl;
        cout<<"(1): Iniciar juego"<<endl;
        cout<<"(2): Ver puntajes"<<endl;
        cout<<"(3); Salir del juego"<<endl;
        cout<<"(4): Creditos del juego"<<endl;
        cout<<"Presiona el numero de la opcion: "<<endl;
        cin>>opcion;
//declaramos cada caso con un ´switch´
switch(opcion){
    case 1: 
    //Aqui va el code del juego
    cout<<"a"<<endl;
    break;

    case 2: 
    cout<<"Mejores puntajes del juego:"<<endl;
    //declaramos cout puntajes 
    break;

    case 3:
    cout<<"Saliendo del juego. Te extrañaremos."<<endl;
    break;

    case 4: 
    cout<<"Creditos:"<<endl;
    cout<<"Isabella Hernandez"<<endl<<"Karolina Salazar"<<endl<<"Alicia Sayana Pereira Tuqueres"<<endl;
    break;

    //cuando no se selecciona una opcion disponible 
    default:
    cout<<"Opcion invalida. Por favor, elija una opcion dentro de las opciones"<<endl;
    break;

}

//While para cuando el usuario quiera salir 
    } while (opcion !=3);
    return 0;

}


#include<iostream>
#include<string>
#include<fstream>
using namespace std;

const int maximo=10;

struct Datosusuario {
    string nombre;
    int puntaje;
};

//guardar los datos en un txt
void Guardardatos(Datosusuario[], int numusuario){
    ofstream archivo("usuarios.txt");
}

int main(){
    Datosusuario datosusuario;
    datosusuario.nombre[maximo];
    datosusuario.puntaje=100000;

    cout<<"Ingrese el nombre del user: "; 
    cin>>datosusuario.nombre;
    cout<<"Su user es: "<<datosusuario.nombre<<endl;
    cout<<"Su puntaje es: "<<datosusuario.puntaje<<endl;

    return 0;
}
