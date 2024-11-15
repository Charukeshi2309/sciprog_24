/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function to allocate a double array
int* allocatearray(int n){
	int* array = (int *) malloc ( n * sizeof(int));
	return array;
}
// Function to fill an integer array with ones

void fillwithones(int * a, int n){
	for(int i =0; i<n; i++){
		a[i] = 1;
	}
}

// Function to print an integer array
void printarray(int * a, int n){
	printf("printing the array: \n");
	for(int i =0; i<n; i++){
		printf("%d \n", a[i]);
	}
	printf("\n");
}
// Function to free allocated memory for an integer array
void freearray(int *a){
	free(a);
	
}
// Function to calculate factorial of a number
int factorial(int n){
	if (n == 0 || n==1){
		return 1;
	}
	return n* factorial(n-1);
}
// Function to approximate e 
double* finde(int n){
	double* array = (double*) malloc((n+1)* sizeof(double));
	array[0] = 1.0;
	double sum = array[0];
	for(int i=1; i<=n; i++){
		array[i] = 1.0 / factorial(i);
		sum += array[i];
	}
	printf("the value calculated was : %.3f\n", sum);
	printf("the acutal value is: 2.71828\n");
	printf("the difference is: %.3f\n", sum - 2.71828 );
	return array;
}
int main(){
// Part 1: Approximating e
	int n;
	printf("enter the value of n: ");
	scanf("%d", &n);
	double* array =finde(n);
	free(array);


// Part 2: Basic integer array manipulation
	printf("\nEnter the size of the integer array to allocate and fill with ones: ");
	scanf("%d", &n);
	int* a =  allocatearray(n);
	fillwithones(a,n);
	printarray(a,n);
	freearray(a);
	return 0;
}