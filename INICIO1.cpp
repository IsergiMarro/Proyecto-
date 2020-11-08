#include "FINAL.cpp"
#include<iostream>

using namespace std;
class INICIO1:FINAL{
	// Atributos
	private :string INICIO;
	public: 
	//Constructor
INICIO1(string lin1,string lin2,string fi,string n):FINAL(lin1,lin2,fi){
			INICIO=n;
		}
	//modificar (set)
	void setinicio(string n){INICIO=n;}	
	void setl1(string lin1){L1=lin1;}
	void setl2(string lin2){L2=lin2;}	 
	void setfin(string fi){FIN=fi;}	 
	 //mostrar (get) 
	 	string getinicio(){return INICIO;}
	 	string getl1(){return L1;}
	 	string getl2(){return L2;}
	 	string getfin(){return FIN ;}	
	// Metodos
		void mostrar(){
cout<<"-----------------------------------------------"<<endl;
cout<<INICIO<<","<<L1<<", "<<L2<<", "<<FIN<<endl;
}
};
