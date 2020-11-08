#include"final.cpp"
#include<iostream>
using namespace std;
class fase1:final{
	private : string INICIO;
	fase1(string lin1,string lin2,string end,string I):final(lin1,lin2,end){
		INICIO=I;
	}
	modificar (set)
	void setinicio(string I){INICIO=I;}
	void setlinea1(string lin1){L1=lin1;}
    void setlinea2(string lin2){L2=lin2;}
    void setfin(string end){FIN=end;}
    mostra (get)
    string getinicio(){return INICIO;}
    string getlinea1(){return L1;}
    string getlinea2(){return L2;}
    string getfin(){return FIN;}
    
    Void mostrar(){
	cout<<"--------------------------------------------------"<<endl;
	cout<<INICIO<<","<<L1<<","<<L2<<","<<FIN<<endl;
	}
	};
