//z5206267@cse.unsw.edu.au
/*
This program should ask for two integers 
using the message Please enter two integers: 
and then display the sum of the integers as a + b = sum.
*/

#include <stdio.h>

int main(void){
    int num1;
    int num2;
    printf("Please enter two integers: ");
    scanf("%d %d", &num1, &num2);
    int sum = num1 + num2;
    printf("%d + %d = %d\n", num1, num2, sum);
    return 0;
}
