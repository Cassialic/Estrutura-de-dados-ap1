#include<iostream>
#define TAM 6

using namespace std;


void imprime_vetor(int l[TAM]);

int main() {
	int lista[TAM] ={34,12,15,21,5,88};
	int temp, i, j, elem_min;
    imprime_vetor(lista);
    
    
	for(i=0; i<TAM - 1; i++){
		elem_min = i;
		for(j = i + 1; j < TAM; j++)
			if(lista[j]>lista[elem_min])
				elem_min = j;
		temp = lista[elem_min];
		lista[elem_min]= lista[i];
		lista[i] = temp;
			
}
	cout << endl;
	imprime_vetor(lista);
	
	return 0;
}

 void imprime_vetor(int l[TAM]){
	for(int i=0; i <TAM; i++)
		cout << l[i]<< " ";
}