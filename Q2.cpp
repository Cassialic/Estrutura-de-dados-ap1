/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#define TAM 6
using namespace std;
void imprime_vetor(int l[TAM]);
int comp;
int mov;


int main(){
 int lista[TAM] = {5,2,4,6,1,3};
 int temp , i , j, elem_min;
imprime_vetor(lista);

for(i = 0; i<TAM-1; i++){
  elem_min = i;
  mov++;
  for(j = i+1; j<TAM; j++){
   comp++;
   if(lista[j] < lista[elem_min])
   elem_min = j;
  }
  
  temp = lista[elem_min];
  lista[elem_min] = lista[i];
  lista[i] = temp;
 }
 
 cout << "\n\n Ordenado \n" << endl;
 imprime_vetor(lista);
 cout<<endl;
 cout<<"MOVIMENTACAO: "<< mov <<endl;
 cout<<"COMPARACAO: "<< comp <<endl;
 return 0;
}

void imprime_vetor(int l[TAM]){
 for (int i=0; i<TAM; i++)
  cout << l[i] <<" ";
 
}