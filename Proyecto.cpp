#include <iostream>
#include <fstream>

using namespace std;
const char *nombre_traductor = "traductor.txt";
struct Datos{
	string informacion;
	string traducir;
	string finalizada;
	string final;
};
void abrir();
void ingresar();
main(){
	abrir();
  ingresar();
	system("PAUSE");
}
void abrir(){
	ifstream traductor;
	traductor.open(nombre_traductor,ios::app); 
	string fila;
	if (traductor.fail()){
		 cout<<"no es posible abrir el traductor"<<endl;
		 exit(1);
		 }else{
		 	do{
		 		getline(traductor,fila);
		 		cout<<fila<<endl;
			 }while(traductor.eof()==false);
		}
		
		 traductor.close();
		 
	}
	void ingresar(){
		ofstream traductor;
		traductor.open (nombre_traductor,ios::app);
		char s;
		Datos datos;
		if(traductor.fail()){
			cout<<" no es posible abrir el traductor"<<endl;
			exit(1);	
	}else{
		
	       do{
	       	cout <<"ingrese las la Informacion:";
	       	cin>>datos.informacion;
	       	cin.ignore();
	       	cout<<"ingrese los datos que desea Traducir:";
	       	getline(cin,datos.traducir);
	       	cout<<"traduccion Finalizada:";
	       	getline(cin,datos.finalizada);
	       	cout<<"ingrese su comentario Final:";
	       	cin>>datos.final;
	       	
	       	traductor<<datos.informacion<<","<<datos.traducir<<","<<datos.finalizada<<","<<datos.final<<","<<endl;
	        traductor<<datos.informacion<<endl;
	       	traductor<<datos.traducir<<endl;
	       	traductor<<datos.finalizada<<endl;
	       	traductor<<datos.final<<endl;
	       	
	       	cout<<"continuar (s/n):";
	       	cin>>s;
	       	system("cls");
	       	}while(s=='s');
	       	
		   }
		   traductor.close();
		   abrir();
		   
}

