#include<iostream>
#define TAM 101
using namespace std;
void imprime_vetor(int l[TAM]);

int main(){
	int lista[TAM] = {41, 67, 34, 0, 69, 24, 78, 58, 62, 64, 5, 45, 81, 27, 61, 91, 95, 42, 27, 36, 91, 4, 2, 53, 92, 82, 21, 16, 18, 95, 47, 26, 71, 38, 69, 12, 67, 99, 35, 94, 3, 11, 22, 33, 73, 64, 41, 11, 53, 68, 47, 44, 62, 57, 37, 59, 23, 41, 29, 78, 16, 35, 90, 42, 88, 6, 40, 42, 64, 48, 46, 5, 90, 29, 70, 50, 6, 1, 93, 48, 29, 23, 84, 54, 56, 40, 66, 76, 31, 8, 44, 39, 26, 23, 37, 38, 18, 82, 29, 41};
	int temp , i , j, elem_min;
	imprime_vetor(lista);
	
	for(i=0; i<TAM; i++){
		for(j = 0; j <TAM-i-1; j++){
			if(lista[j] > lista[j+1]){
				temp = lista[j];
				lista[j] = lista[j+1];
				lista[j+1] = temp;
			}
		}
	}
	cout<<"Ordenado"<<endl;
	imprime_vetor(lista);
	return 0;
}

void imprime_vetor(int l[TAM]){
	for (int i=0; i<TAM; i++)
		cout << l[i] << endl;
	
}

	
