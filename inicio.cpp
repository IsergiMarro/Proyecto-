#include"INICIO1.cpp"
#include<iostream>
using namespace std;
main(){
	string INICIO,L1,L2,FIN;
	cout<<"Ingrese el inicio: ";
	cin>>INICIO;
	cout<<"Ingrese l1: ";
	cin>>L1;
	cout<<"Ingrese l2:";
	cin>>L2;
	cout<<"Ingrese el fin: ";
	cin>>FIN;
	
	INICIO1 obj = INICIO1(INICIO,L1,L2,FIN);
	obj.mostrar();
	
	cout<<"--------- Modificar ------------"<<endl;
	cout<<"Ingrese el inicio: ";
	cin>>INICIO;
	cout<<"Ingrese l1: ";
	cin>>L1;
	cout<<"Ingrese l2:";
	cin>>L2;
	cout<<"Ingrese el fin: ";
	cin>>FIN;
	obj.setinicio(INICIO);
	obj.setl1(L1);
	obj.setl2(L2);
	obj.setfin(FIN);
	//obj.mostrar();
	cout<<obj.getinicio()<<endl;
	cout<<obj.getl1()<<endl;
	cout<<obj.getl2()<<endl;
	cout<<obj.getfin()<<endl;
	
	
}
