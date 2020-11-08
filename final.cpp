#include<iostream>
using namespace std;
class final{
	protected :string L1,L2,FIN;
	
	protected:final(string lin1,string lin2,string end){
		L1=lin1;
		L2=lin2;
		FIN=end;
	}
	void agregar();
	void mostrar();
};
