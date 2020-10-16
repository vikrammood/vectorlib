#include<veclib.h>
int main() {
	vector vec1, vec2;
	float norm;
	
	printf("Enter the elements of first vector: \n");
	for(int i=0;i<DIM;i++)
		scanf("%f",&vec1.x[i]);
	printf("Enter the elements of second vector: \n");
	for(int i=0;i<DIM;i++)
		scanf("%f",&vec2.x[i]);	
	vector vec_sum = add(vec1,vec2);
	printf("Sum of vectors: \n");
	print(vec_sum);
	vector vec_proc = eleProd(vec1,vec2);
	printf("\nElement wise product of vectors: \n");
	print(vec_proc);
	printf("\n");
	norm = vecNorm(vec1, vec2);
	printf("Norm of vectors: %f\n", norm);
	float dotp = dotprod(vec1, vec2);
	printf("Dot product of two vectors: %f\n", dotp);
	float angle_v = angle(vec1, vec2);
	printf("Angle between two vectors: %f\n", angle_v);
}


void print(vector vec) {
	int i;
	printf("[");
	for (i=0;i<DIM;i++)
		printf("%f ",vec.x[i]);
	printf("]");
