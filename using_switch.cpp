/*

A little program that use Swith to navigate on the menu.

Lucas Batista

*/

#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

class Imovel{
	private:
		string proprietario;
		float metros, valor;
	public:
		Imovel(){	//constructor
			proprietario="Vazio";
			metros=0;
			valor=0;
		}
		~Imovel(){}	//destructor

		void menu(){	//menu
			//system("clear");	//use cls for Windows S.O.
			cout<<"\n ========================================= ";
			cout<<"\n 	IMOBILIARIA DOCE LAR";
			cout<<"\n ========================================= ";
			cout<<"\n\n[1] - CADASTRO";
			cout<<"\n[2] - CONSULTAR PROPRIETARIO";
			cout<<"\n[3] - CONSULTAR POR TAMANHO (m2)";
			cout<<"\n[4] - CONSULTAR POR VALOR";
			cout<<"\n[0] - SAIR";
			cout<<"\n\n";
		}
		void set_dados(){
			cin.ignore();
			cout<<"\nDigite o nome do proprietario: ";getline(cin,proprietario);
			cout<<"\nDigite o tamanho em m2: ";cin>>metros;
			cout<<"\nDigite o valor: ";cin>>valor;
			cin.ignore();
			cout<<"\n\n";
		}
		void print_dados(){
			cout<<"\nProprietario: "<<proprietario;
			cout<<"\nTamanho: "<<metros<<"m2";
			cout<<"\nValor: "<<valor;
			cout<<"\n\n";
		}
		string ret_proprietario(){
			return proprietario;
		}
};

int main(){
	Imovel A[2],B[2],M;
	string bprop;
	int op;
	cout<<"\n\n";

	do{
		M.menu();
		cout<<"Digite uma opcao < >\b\b";cin>>op;
		switch(op){
			case 1:
				system("clear");	//use cls for Windows S.O.
				cout<<"\n ========================================= ";
				cout<<"\n 	IMOBILIARIA DOCE LAR";
				cout<<"\n 	      CADASTRAR ";
				cout<<"\n =========================================\n\n ";
				for(int a=0; a<2; a++)
					A[a].set_dados();
			break;
			case 2:
				system("clear");
				cout<<"\n ========================================= ";
				cout<<"\n 	IMOBILIARIA DOCE LAR";
				cout<<"\n 	CONSULTAR PROPRIETARIO ";
				cout<<"\n =========================================\n\n ";
				cout<<"\nBuscar por : ";getline(cin,bprop);
				cin.ignore();
				for(int b=0; b<2; b++){
					if(A[b].ret_proprietario()==bprop)
						A[b].print_dados();
						cout<<"\n\n";
				}
			break;
			default:
				cout<<"\nOpcao invalida";
			break;
		}

	}while(op>0);

	cout<<"\n\n";
	return 0;
}
