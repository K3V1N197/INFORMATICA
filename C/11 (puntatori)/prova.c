#include <stdio.h>
#define N 5

void carica (int v[]);
void stampa (int v[]);
int maggiore (int v[]);
int main ()
{
    int v[N];
    carica(v);
    stampa(v);
    int max = maggiore(v);
    printf("\n max: %d",max);
    return 0;
}

void carica (int v[])
{
    int *p;
    for (p=v; p-v < N; p++){
    scanf("%d", p);
    }
}

void stampa (int v[])
{
    int *p;
    for (p=v; p-v < N; p++){
    printf("%d ", *p);
    }
}
int maggiore (int v[])
{
    int max=0;
    int *p;

    for (p=v; p-v < N; p++)
    {
        if (*p>max) 
        {  
            max=*p;
        }    
    }
    return max;
}
    
  
