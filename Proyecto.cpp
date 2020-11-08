#include <iostream>
#include <fstream>

using namespace std;
const char *nombre_traductor = "traductor.txt";
struct Programacion{
	string letra1;
	string letra2;
	string letra3;
	string letra4;
	string letra5;
	string traducido;
};
void ingresar();
main(){
ingresar ();
	system("PAUSE");
}
void ingresar (){
	ofstream traductor;
	traductor.open(nombre_traductor,ios::app); 
	char s;
	Programacion programacion;
	if (traductor.fail()){
		 cout<<"no es posible abrir el traductor"<<endl;
		 exit(1);
		 }else{
		 	
		 cout<<"exito..."<<endl;
	}
}
