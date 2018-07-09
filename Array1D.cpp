//Array1D
//Danes Novigar
//20170801087
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	
	int data[5]={1,2,4,5,2};
	
	for(int i=0;i<5;i++){
		cout<<"nilai : ";
		cout<<data[i]<<endl;
		
		cout<<"indeks: ";
		cout<<i<<endl;
		
		cout<<"Urutan: ";
		cout<<i+1<<endl<<endl;
	}
	getch();
}
