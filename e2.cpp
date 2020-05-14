#include <iostream>

using namespace std;

int mostrar(int A[], int z)
{
    for (int i=0 ; i<z ; i++)
        cout<<A[i];
}
int inverse (int A[], int z)
{
    int j=z-1,b;                  
    for (int i=0 ; i<z/2 ; i++)   
    {
        b=A[i];                  
        A[i]=A[j];
        A[j]=b;
        j--;                       
    }
    return mostrar(A,z);
}

int inverse2 (int A[], int a, int z)
{
    if (a>z/2)
        return 0;
    int b=A[a];
    A[a]=A[z-1];
    A[z-1]=b;
    return (inverse2(A,a+1,z-1));
}
int main()
{
    int sizeA = 4;
    int A[sizeA]= {1,2,3,4};
    inverse(A,sizeA);
    inverse2(A,0,sizeA);
    mostrar(A,sizeA);
}
	