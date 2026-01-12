//C Programme for sum of 2 numbers
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sum_2_num(int a, int b)
{
   int c;
    c=a+b;
    return c;
 
}
int main() {
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int sum; 
    sum = sum_2_num(num1,num2);
    printf("%d",sum);
    return 0;
}
