#include<iostream>
using namespace std;
class FINAL{
	// Atributos
	protected : string L1,L2,L3,FIN;	
	protected :FINAL(string lin1,string lin2,string fi){
			L1=lin1;
			L2=lin2;
			FIN=fi;	
		}
		
	// Metodos de accion
		void agregar();
		void mostrar();
};
