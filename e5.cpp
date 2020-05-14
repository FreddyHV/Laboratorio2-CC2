#include <iostream>

using namespace std;

int mostrar(int A[], int z)
{
    for (int i=0 ; i<z ; i++)
        cout<<A[i];
}
char concatenar(char *A, char *B ,int sA)
{
    int sB=tamano(B);
    for (int i=0;i<sA;i++)  
        *(B+i+sB)=*(A+i);   
    cout<<B;
}
int main()
{
    int sizeA = 4;
    int A[sizeA]= {1,2,3,4};

    concatenar(C,D,sizeC);
}