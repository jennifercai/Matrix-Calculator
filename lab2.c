#include "lab2.h"


void readMatrix(char * filename, int * matrix)
{
	int x;
	FILE *fileread = fopen(filename,"r");
	for (x= 0; x<MATSIZE*MATSIZE; x++)
	{
		fscanf(fileread,"%d",(matrix+x));
	}
}

void printMatrix(int n, int *A)
{
	int x, y;
	for (x = 0; x<n*n; x++)
	{
		printf("%d ",*(A+x));
		if ((x+1)%n==0)
		{
			printf("\n");
		}
	}
}

void sum(int *A, int *B, int *res, int n)
{
	int x;
	for (x = 0; x<n*n; x++)
	{
		*(res+x) = *(A+x)+ *(B+x);
	}
}

void sub(int *A, int *B, int *res, int n)
{
	int x;
	for (x = 0; x<n*n; x++)
	{
		*(res+x)= *(A+x)- *(B+x);
	}
}

//using cofactor expansion
int determinant(int n, int *matrix)
{
	if (n ==1)
	{
		return *matrix;		
	}
	else if (n ==2)
	{
		return *matrix * *(matrix+3) - *(matrix+1) * *(matrix+2);	
	}
	else
	{
		int j;
		int total=0;
		for (j =0 ; j<n;j++)
		{
			int minor [n-1][n-1];
			int y,x;
			for (x=1;x<n;x++)
			{
				int k=0;
				for (y=0;y<n;y++)
				{
					if (y==j)
					{
						continue;
					}
					minor[x-1][k]=*(matrix+x*(n)+y);
					k++;
				}
			}
			total = total+ pow(-1,j+2)* *(matrix+j)* determinant(n-1,(int *)minor);
		}
		return total;
	}
}
