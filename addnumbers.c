#include <stdio.h>
int main() {    

    int num1, num2;
    int sum;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // calculate the sum 
    sum = num1 + num2;      
    
    printf("%d + %d = %d", num1, num2, sum);
    return 0;
}