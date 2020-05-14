#include <iostream>

using namespace std;

int mostrar(int A[], int z)
{
    for (int i=0 ; i<z ; i++)
        cout<<A[i];
}
int cambiar(int A[], int a, int b)  
{
    int c = A[a];
    A[a] = A[b];
    A[b] = c;
}

int copiararray(int A1[],int A2[],int z)    
{
    for (int i=0 ; i<z ; i++)
        A2[i] = A1[i];
}

int comparar(int A1[],int A2[],int z)
{
    for (int i=0 ; i<z ; i++)
        if (A2[i] != A1[i])
            return 0;
    return 1;
}


int ordenar(int A[], int z)
{
    int A2[z]; 
    while (true)
    {
        if (comparar(A,A2,z)==1) 
            break;              

        copiararray(A,A2,z);   
        for (int i=0 ; i<z-1 ; i++)
        {                           
            if (A[i]>A[i+1])        
                cambiar(A,i,i+1);   
        }
    }
    mostrar(A,z);
}
int main()
{
    int sizeA = 4;
    int A[sizeA]= {1,2,3,4};
    int sizeB = 4;
    int B[sizeB]= {4,3,2,1};

    ordenar(B,sizeB);
}

