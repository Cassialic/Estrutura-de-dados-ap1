#include<iostream>
#define TAM 6

using namespace std;


void imprime_vetor(int l[TAM]);



int main() {
	int lista[TAM] ={34,12,15,21,5,88};
	int temp, i, j;
	imprime_vetor(lista);
	for(i=0; i<TAM - 1; i++){
		for(j = 0; j < TAM -i - 1; j++)
				if(lista[j]<lista[j + 1]){			
				temp = lista[j];
				lista[j]= lista[j + 1];
				lista[j + 1] = temp;
		
	}
}
	cout <<endl;
	imprime_vetor(lista);
	
	return 0;
}

 void imprime_vetor(int l[TAM]){
	for(int i=0; i <TAM; i++)
		cout << l[i]<< " ";
}