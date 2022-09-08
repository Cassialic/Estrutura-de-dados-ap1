#include<iostream>
#define TAM 6

using namespace std;
//EXERCÍCIO 4 USANDO INSERTION_SORT de forma DESCENDENTE
void imprime_vetor(int l[TAM]);


int main() {
	int lista[TAM] = {34,12,15,21,5,88};
	int temp , i , j;

	imprime_vetor(lista);
	for(i=0; i<TAM; i++){
		temp = lista[i];
		j = i - 1;
		while((lista[j]<temp)&&(j >= 0)){
			lista[j+1] = lista[j];
			lista[j] = temp;
			j--;	
		}	
}
	cout<< endl;
	imprime_vetor(lista);
	

	return 0;
}

void imprime_vetor(int l[TAM]){
	for(int i=0; i <TAM; i++)
		cout << l[i]<< " ";
}