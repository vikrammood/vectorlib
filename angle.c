
#include <stdio.h>
#include "veclib.h"
#include <math.h>

float dotprod(vector vec_a,vector vec_b) 
{ 
  
    int product = 0;  
    for (int i = 0; i < 4; i++) 
  	product = product + vec_a[i] * vec_b[i]; 
    return product; 
} 

double Angle(vector vec_a , vector vec_b){

	float dot = dotprod(vec_a,vec_b);
	int len_a = 0;
	int len_b = 0;
	for(int i=0;i<4;i++)		
	{
		len_a=len_a+vec_a[i]*vec_a[i];
		len_b=len_b+vec_b[i]*vec_b[i];
	}
	double angle = acos(dot/sqrt(len_a * len_b));
	return angle*180/3.14159;
};

