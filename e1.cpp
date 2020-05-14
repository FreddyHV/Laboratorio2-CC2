#include <iostream>

using namespace std;

int mostrar(int A[], int z)
{
    for (int i=0 ; i<z ; i++)
        cout<<A[i];
}

int sumadeelementos(int *A,int z)
{
    int suma=0;
    for (int i=0 ; i<z ; i++) 
        suma += *(A+i);
    return suma;
}

int sumadeelementos2(int A[],int z)
{
    if (z <= 0)
        return 0;
    return (sumadeelementos2 (A, z-1) + A[z-1]);
}
int main()
{
    int sizeA = 4;
    int A[sizeA]= {1,2,3,4};

    cout<<sumadeelementos( A,sizeA);
    cout<<sumadeelementos2( A,sizeA);