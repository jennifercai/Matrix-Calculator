#include "lab2.h"

void p1(void)
{
    int matrix[MATSIZE][MATSIZE];
    readMatrix("matrix1.txt", (int *)matrix);
    printMatrix(MATSIZE,(int *)matrix);
}

void p2(void)
{
    int matrix1[MATSIZE][MATSIZE];
    int matrix2[MATSIZE][MATSIZE];
    int sumMatrix[MATSIZE][MATSIZE];
    readMatrix("matrix1.txt", (int *)matrix1);
    readMatrix("matrix2.txt", (int *)matrix2);
    sum((int *)matrix1, (int *)matrix2,(int *)sumMatrix,MATSIZE);
    printMatrix(MATSIZE,(int *)matrix1);
    printMatrix(MATSIZE,(int *)matrix2);
    printMatrix(MATSIZE,(int *)sumMatrix);
}

void p3(void)
{
    int matrix1[MATSIZE][MATSIZE];
    int matrix2[MATSIZE][MATSIZE];
    int subMatrix[MATSIZE][MATSIZE];
    readMatrix("matrix1.txt", (int *)matrix1);
    readMatrix("matrix2.txt", (int *)matrix2);
    sub((int *)matrix1, (int *)matrix2,(int *)subMatrix,MATSIZE);
    printMatrix(MATSIZE,(int *)matrix1);
    printMatrix(MATSIZE,(int *)matrix2);
    printMatrix(MATSIZE,(int *)subMatrix);
}

void p4(void)
{
    int matrix1[MATSIZE][MATSIZE];
    readMatrix("matrix1.txt", (int *)matrix1);
    printMatrix(MATSIZE,(int *)matrix1);
    printf("The determinant of the matrix is %d\n",determinant(MATSIZE,(int *)matrix1));
}

int main( int argc, char *argv[] )
{
    if( argc < 2 )
   	{
        printf("Expecting at least one argument. Please try again\n");
   	}
    else if(argc==2)
    {
        if(atoi(argv[1])==1)
        {
            p1();
        }
        else if(atoi(argv[1])==2)
        {
            p2();
        }
        else if(atoi(argv[1])==3)
        {
            p3();
        }
        else if(atoi(argv[1])==4)
        {
            p4();
        }
        else
        {
            printf("Incorrect argument supplied.\n");
        }
    }
    else
    {
        printf("Expecting one argument. Please try again.\n");
    }
}
