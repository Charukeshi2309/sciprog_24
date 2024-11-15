/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Iterative GCD function 
int IterativeGCD( int x , int y){
    int temp = 0 ;
    while (y != 0){
        temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

// Recursive GCD function 
int RecursiveGCD( int x , int y){
    if ( y == 0 ){
        return x;
    } 
    return RecursiveGCD(y, x%y);
}

int main(){
    int x , y, ans = 0;
    printf("enter the values for GCD:");
    scanf("%d %d", &x, &y);
    // Using the iterative method
    ans = IterativeGCD(x, y);
    printf("the GCD for Iterative the values is %d\n", ans );
    // Using the recursive method
    ans = RecursiveGCD(x,y);
    printf("the GCD for Recursive the values is %d\n", ans );
    
    return 0;
}