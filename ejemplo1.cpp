#include <iostream>
using namespace std;
main(){

	for (int i=0; i<10; i++){
	
	if(i==5){
	cout<<"if"<<endl;
	continue;	
	}
	cout<<i<<endl;
	}
	
	cout<<"Fuera del for"<<endl;
	system("pause");
}
