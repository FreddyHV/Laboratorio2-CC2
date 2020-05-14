#include <iostream>

using namespace std;

int mostrar(int A[], int z)
{
    for (int i=0 ; i<z ; i++)
        cout<<A[i];
}
char copiarelementos(char *A, char *B ,int sA , int sB)
{
    for (int i=0;i<sB;i++)
    {
        if ((*(A+i)==NULL)&&(*(B+i)==NULL)) 
            break;              
        else if (*(A+i)==NULL)      
            *(B+i)=NULL;      
        else
            *(B+i)=*(A+i);  
    }                          
    cout<<B;
}

int main()
{
    int sizeA = 4;
    int A[sizeA]= {1,2,3,4};
    copiarelementos(C,D,sizeC,sizeD);
}