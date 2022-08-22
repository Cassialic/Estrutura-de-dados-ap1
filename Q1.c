/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define TAM 6
int main()
{
    void insertion_sort(int v[]){
    int i,j,aux;
    for(i = 1; i < TAM; i++){
        aux = v[i];
        j = i - 1;
        
        while((j >= 0)&& (aux < v[j] )){
            v[j+1] = v[j];
            j--;
            
            
        }
        v[j+1] = aux;
        
    }
    
    
}

}
