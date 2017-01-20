#include <stdio.h>
#include <stdlib.h>
#include "math.h"
#define MATSIZE		5

void printMatrix(int n, int * A);
void readMatrix(char * filename, int * matrix);
void sum(int * A, int * B, int * res, int n);
void sub(int * A, int * B, int * res, int n);
int determinant(int n, int * matrix);
