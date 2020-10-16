#include<stdio.h>

#define DIM 4

typedef vector float[DIM];

void print(vector vec_a);

vector add(vector vec_a,vector_b)
{
	vector vec_c;
	
	for(int i=0;i<DIM;i++)
	{
	   vec_c[i]=vec_a[i]+vec_b[i];
	}
   return vec_c; 
}

