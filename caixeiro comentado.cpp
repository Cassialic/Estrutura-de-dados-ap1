/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// C++ implementação da abordagem
#include <bits/stdc++.h>
using namespace std;
#define V 4
 
// Função para encontrar o ciclo hamiltoniano de peso mínimo
void tsp(int graph[][V], vector<bool>& v, int currPos,
         int n, int count, int cost, int& ans)
{
 
    // Se o último nó for alcançado e tiver um link
    // para o nó inicial, ou seja, a fonte, então
    // mantém o valor mínimo fora do custo total
    // de travessia e "ans"
    // Finalmente retorna para verificar mais valores possíveis
    if (count == n && graph[currPos][0]) {
        ans = min(ans, cost + graph[currPos][0]);
        return;
    }
 
    // ETAPA DE RETROCESSO (batracking)
    // Loop para percorrer a lista de adjacências
    // do nó currPos e aumentando a contagem
    // por 1 e custo por valor do gráfico[currPos][i]
    for (int i = 0; i < n; i++) {
        if (!v[i] && graph[currPos][i]) {
 
            // Marcar como visitado

            v[i] = true;
            tsp(graph, v, i, n, count + 1,
                cost + graph[currPos][i], ans);
 
            // Marca o nó como não visitado
            v[i] = false;
        }
    }
};
 
// Código do driver

int main()
{
// n é o número de nós, ou seja, V

    int n = 4;
 
    int graph[][V] = {
        { 0, 10, 15, 20 },
        { 10, 0, 35, 25 },
        { 15, 35, 0, 30 },
        { 20, 25, 30, 0 }
    };
 
    // Array booleano para verificar se um nó
    // foi visitado ou não
    vector<bool> v(n);
    for (int i = 0; i < n; i++)
        v[i] = false;
 
    // Marca o nó 0 como visitado
    v[0] = true;
    int ans = INT_MAX;
 
// Encontra o ciclo hamiltoniano de peso mínimo
  tsp(graph, v, 0, n, 1, 0, ans);
 
// ans é o peso mínimo do ciclo hamiltoniano    cout << ans;
 
    return 0;
}