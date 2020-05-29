#include <windows.h>
#include <sstream>
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class adeudo{
	public:
		string ati;
};
char B;
int Ba;
int A ;
int C;
string no[]= {"\n no moriras de covid-19\n"};

void risk(string s="0%"){
	cout<<"\n   "<<s<<"\n Riesgo de morir";
}

int boomer(){
	system("cls");
	cout << "\n   Cuantos annos tienes?\n  ";
	cout << "\n   1)50-59    2)60-69\n   3)70-79    4)80-89\n   5)90 +    6)menos\n   ";
	int sad;
	cin>>sad;
	switch(sad){
		case 1:
			risk("0.11%");
			break;
		case 2:
			risk("0.47%");
			break;
		case 3:
			risk("2.53%");
			break;
		case 4:
			risk("7.12%");
			break;
		case 5:
			risk("17.50%");
			break;
		case 6:
			risk("0.04%");
			break;
			
	}
}

int main(){
	adeudo ads;
	
	system("cls");
	cout << "\n\n---------------------------------";
	cout <<"\n\n	El covid me matara?\n\n";
	cout << "---------------------------------\n\n";
	cout<<"   1)Iniciar		2)salir 	\n		";
	cin >> A;
	
	switch(A){
		case 1:
			system("cls");
			break;
		case 2:
			cout<<"\nSalir?\nY/N ";
			cin >> B;
			switch (B){
				case 'y':
					system("cls");
					return 0;
					break;
				case 'n':
					return main();
					break;
			}
			break;
		default:
			return 0;
			break;
	}
	cout<<"\n  Piensas permanecer en casa durante los siguientes 2 annos\n  hasta que haya inmunidad?\n  ";
	cout<<" 1)Si\n   2)No\n  ";
	cin >>A;
	switch(A){
		case 1:
			cout<<"\n  no moriras de covid-19\n";
			cout<<"\npresiona enter para continuar...\n";
			getline (cin,ads.ati);
			getline (cin,ads.ati);
			return main();
			break;
		case 2:
			system("cls");
			cout<<"\n    Tendras covid-19\n 80% probable que te de leve o que seas asintomatico\n  ";
			cout<<"\n   eres menor de '19' annos y eres sano?  \n  ";
			cout<<" 1)Si   2)No\n  ";
			cin>>Ba;
			switch(Ba){
				case 1:
					system("cls");
					cout<<"\n no moriras de covid-19\n";
					cout<<"\npresiona enter para continuar...\n";
					getline (cin,ads.ati);
					getline (cin,ads.ati);
					return main();
					break;
				case 2:
					system("cls");
					cout<<"\n  Tienes menos de 50 annos?\n  ";
					cout<<"1)Si   2)No\n  ";
					cin>>C;
					switch(C){
						case 1:
							cout<<"\n Tienes 0.04%\n riesgo de morir\n";
							cout<<"\npresiona enter para continuar...\n";
							getline (cin,ads.ati);
							getline (cin,ads.ati);
							return main();
							break;
						case 2:
							boomer();
							cout<<"\npresiona enter para continuar...\n";
							getline (cin,ads.ati);
							getline (cin,ads.ati);
							return main();
							break;
					break;
											
	}
	}}
	return main();
}
