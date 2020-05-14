#include <iostream>

using namespace std;

int mostrar(int A[], int z)
{
    for (int i=0 ; i<z ; i++)
        cout<<A[i];
}
int tamano(char *A)
{
    int i=0;
    while (*(A+i)!=NULL) 
        i++;               
    return i;
}

int tamano2(char *A,int i)
{
    if (*(A+i)==NULL)
        return 0;
    return (tamano2(A,i+1)+1);
}
int main()
{
    int sizeA = 4;
    int A[sizeA]= {1,2,3,4};
    char *S="Hola";
    cout<<tamano(S);
    cout<<tamano2(S,0);
}