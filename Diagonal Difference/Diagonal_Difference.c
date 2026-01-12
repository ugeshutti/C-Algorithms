//Given a square matrix, calculate the absolute difference between the sums of its diagonals.
//Function for computing the diagonal difference from 2*2 array

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,sum1=0,sum2=0,sum=0,k; 
    scanf("%d",&n);
    int a[n][n];
    k=n;
    for(int a_i = 0; a_i < n; a_i++)
    {
       for(int a_j = 0; a_j < n; a_j++)
       {
          scanf("%d",&a[a_i][a_j]);
       }
    }
   for(int a_i = 0; a_i < n; a_i++)
   {
       sum2=sum2+a[a_i][k-1];
       k--;
       for(int a_j = 0; a_j < n; a_j++)
       {
          if(a_i==a_j)
          {
              sum1=sum1+a[a_i][a_j];
              break;
          }
       }
      
    }
    sum=abs(sum1-sum2);  
   printf("%d",sum);
}
