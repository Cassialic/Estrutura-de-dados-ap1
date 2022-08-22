#include <iostream>

using namespace std;

typedef struct{
        int cod_obj;
        float beneficio;
        float peso;
        
}OBJETO;

typedef struct{
    OBJETO obj[n];
    int no_elementos; 
}LISTA;



const int n=4; //capacidade de objetos
float capacidade = 10; // capacidade de mochila



int main()
{
    LISTA objs;
    float f_peso = 0.0,f_beneficio=0.0;
    int solucao[n];
    int m_mochila[n];
    inicializaLista(&objs);
    inserir_objeto(&objs,1,4,5);
    inserir_objeto(&objs,2,6,3);
    inserir_objeto(&objs,3,7,2);
    inserir_objeto(&objs,4,8,3);
    mostrarObjetos(&objs);
    inicializasolucao(solucao);
    imprime_vetor(solucao);
    
    
    void mochila(int solucao[], int etapa,LISTA objetos,int moch[],float *peso_final,float * beneficio_final){
        int i = 0;
        if(etapa > n-1)return;
        while(solucao[etapa]!=1){
            solucao[etapa]=1;
            if(valido(solucao,etapa,objetos)){
                if(etapa != n-1)
                    mochila(solucao,etapa+1,objetos,moch,peso_final,beneficio_final);
            
                else
            actSolucao(solucao,objetos,,moch,peso_final,beneficio_final);
        }
        i++;
    }
    solucao[etapa] = - 1;
    
}


    bool valido(int solucao[], int etapa, LISTA objs){
        float n_peso = 0;
        for(int i = 0; i <= n; i++){
            if(solucao[i]==1){
                n_peso = n_peso+ objs.obj[i].peso;
            }
        }
        if(n_peso <= capacidade)
            return true;
        else
            return false;
    }
    
    void actSolucao(int solucao[], LISTA objetos,int mochila[],float *peso_final,float * beneficio_final)){
         float n_peso = 0.0;
          float n_beneficio = 0.0;
          for(int i = 0; i <= n ; i++){
              if(solucao[i]== 1){
                  n_peso = n_peso+ objetos.obj[i].peso;
                  n_beneficio = n_beneficio + objetos.obj[i].beneficio;
              }
              if(n_beneficio > *beneficio_final){
                  *beneficio_final = n_beneficio;
                  *peso_final = n_peso;
                  for(int j = 0; j < n; j++)
                    mochila[j] = solucao[j];
              }
          }
    
    
}