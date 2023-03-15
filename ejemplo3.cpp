#include <iostream>

using namespace std;
int main(){
	/*
	int i=5;
	while(i<5){
		cout<<"while: "<<i<<endl;
		i++;
	}
	
	int ii=5;
	do{
		ii++;
		cout<<"do while: "<<ii<<endl;
		
	}while(ii<5);
	system("pause");
	*/
	char respuesta= 's';
	while(respuesta=='s'||respuesta=='S'){
		cout<<"desea ingresar otro valor (s/n) ";
		cin>>respuesta;
	}
	system("pause");
}