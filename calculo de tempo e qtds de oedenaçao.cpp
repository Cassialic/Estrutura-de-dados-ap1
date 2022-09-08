
#include <iostream>
#include <stdlib.h>
#include <time.h>       
#include <math.h>   

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void print_v(int *v, int n){
	for (int i = 0; i < n; i++){
		cout << v[i] << " ";
			
	}
	
}


int main() {
	int vord_a[100];
	int vord_ad[100];
	int vord_r[100];	
	clock_t t;
	
	
	
	for (int i = 0; i <100; i++){
	
		vord_a[i]=i+1;
		vord_ad[i]=100-i;
		vord_r[i]= rand() % 100;
}
    cout << "Valores de 1 a 100 de forma aleatoria" << endl;
	print_v(vord_r,100);
	cout << endl;
	t = clock() - t;
    printf ("Custou %d clicks (%f segundos).\n",t,((float)t)/CLOCKS_PER_SEC);

    cout << "Valores de 1 a 100 de forma crescente" << endl;
	print_v(vord_a,100);
	cout << endl;
	t = clock() - t;
    printf ("Custou %d clicks (%f segundos).\n",t,((float)t)/CLOCKS_PER_SEC);	
	
	cout << "Valores de 1 a 100 de forma decrescente" << endl;
	print_v(vord_ad,100);
	cout << endl;
	t = clock() - t;
    printf ("Custou %d clicks (%f segundos).\n",t,((float)t)/CLOCKS_PER_SEC);
    t = clock() - t;



	
	return 0;
}