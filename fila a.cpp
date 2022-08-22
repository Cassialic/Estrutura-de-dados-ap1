typedef struct{
    int chave[MAX];
    int no_elem;
}O_HEAP;

void inserir_novo(O_HEAP *vetor, int valor){
    vetor->no_elem++;
    vetor->chave[vetor,vetor->no_elem - 1] = valor;
    heapify_up(vetor,vetor->no_elem);
}

//Consertar o heap subindo

void heapify_up(O_HEAP *vetor, int novo){
    int i = novo;
    int tmp;
    while(i >- 2 and(vetor->chave[(i/2)-1] <vetor->chave[i-1])){
        tmp = vetor->chave[(i/2)-1];
        vetor->chave[(i/2)-1]=vetor->chave[i-1];
        vetor->chave[i-1]=tmp;
        i = (i/2);
    }
}

int max_prioridade(O_HEAP hp){
    return hp.chave[0];
}
void remover_maximo(O_HEAP *hp){
    int maximo= hp->chave[0];
    hp->chave[0]=hp->chave[hp->no_elem -1];
    hp->no_elem--;
    heapify(hp, 1);
    return maximo;

    
}

//concerta o heap descendo 
void heapify(O_HEAP *vetor, int i){
    int l = 2*i-1;
    int r = 2*i;
    int m = i-1;
    int temp;
    if(l<vetor->no_elem - 1 && vetor->chave[l] > vetor->chave[m])
        m = l;
    if(l<vetor->no_elem - 1 && vetor->chave[r] > vetor->chave[m])
        m = r;
    if( m != i - 1)
    {
            temp = vetor->chave[i-1];
            vetor->chave[i-1] = vetor->chave[m];
            vetor->chave[m]=temp;
            heapify(vetor, m+1);
    }
}

// aumenta o valor de uma chave
void aumenta_valor(O_HEAP *vetor, int elemt, int valor){
    if(vetor->chave[elemt - 1 ]> valor)
    cout<< "ERRORRRRR"<<endl;
    else{
        vetor->chave[elemt-1] = valor;
        heapify_up(vetor,elemt);

    }
}

void dism_valor(O_HEAP *vetor, int elemt, int valor){
    if(vetor->chave[elemt - 1] < valor)
        cout <<"ERRORRRRRRRRRRRR" <<endl;
    else{
        vetor->chave[elemt-1]=valor;
        heapify(vetor,elemt);
    }
}

int main()
{
    O_HEAP hp;
    inicializaLista(&hp);
    inserir_novo(&hp,20);
     inserir_novo(&hp,10);
      inserir_novo(&hp,5);
       inserir_novo(&hp,30);
        inserir_novo(&hp,50);
         inserir_novo(&hp,45);
           inserir_novo(&hp,35);
    imprime_heap(hp);
    aumenta_valor(&hp,6, 48);
    imprime_heap(hp);
    dism_valor(&hp,3,25);
    imprime_heap(hp);
    cout <<"máxima prioridade:" << remover_maximo(&hp) <<endl;
    imprime_heap(hp);

return 0;
}