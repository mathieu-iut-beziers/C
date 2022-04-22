// #include <stdio.h>

// #include "coucou.h"

// extern int A; // externe permet de dire que cette variable est def mais pas dans ce fichier

// int main (){
//     coucou();
//     // printf("Hello you \r\n");
//     return 0;
// }

// #include <math.h> // par defaul est n'est pas compiler comme les aurtres

// int main(){
//     double A;
//     A= cos(3.14/7);
//     return 0;
// }

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void affiche(int*,int);
void trie(int*,int);
void remplir(int*,int);

int main()
{
    
    int tab[10];

    remplir(tab,10);
    
    affiche(tab,10);

    trie(tab,10);

    affiche(tab,10);

    return 0;
}

void remplir(int* T,int n){
    int i;
    srand(time(NULL));
    for ( i = 0; i < n; i++)
    {
        T[i] = rand()%21;

    }
}


void affiche(int* T, int q){
    int i;
    for ( i = 0; i < q; i++){
        printf(" %d ",T[i]);
    }
    printf("\n");
}

void trie(int* T ,int l){
    int z=0;
    int i;
    int j;

    for (i = 0; i < l; i++)
    {
        z=0 ;
        for (j = 0; j < l-i-1; j++)
        {
            if (T[j] > T[j+1])
            {
                int x = T[j];
                T[j] = T[j+1];
                T[j+1] = x;
                z=z+1;
            }
        }
        if (z==0)
        {
            return;
        }
        
     }
}