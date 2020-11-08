#include"fase1.cpp"
#include<iostream>
using namespace std;
main(){
strin INICIO,L1,L2,FIN;
cout<<"ingrese eL inicio";
cin>>INICIO;
cout<<"ingrese la linea1";
cin>>L1;
cout<<"ingrese la linea2";
cin>>L2;
cout<<"ingrese el fin";
cin>>FIN;

fase1 obj=fase1(INICIO,L1,L2,FIN);
Objeto,mostrar();

cout<<"------------------modificar--------------------"<<endl;
cout<<"ingrese eL inicio";
cin>>INICIO;
cout<<"ingrese la linea1";
cin>>L1;
cout<<"ingrese la linea2";
cin>>L2;
cout<<"ingrese el fin";
cin>>FIN;
obj.setinicio(INICIO);
obj.setlinea1(L1);
obj.setlinea2(L2);
obj.setfin (FIN);
obj.mostrar();
cout<<obj.getinicio()<<endl;
cout<<obj.getlinea1()<<endl;
cout<<obj.getlinea2()<<endl;
cout<<obj.getfin()<<endl;
}
