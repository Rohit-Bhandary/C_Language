#include <stdio.h>
 
 int main()  

 {  int i=1,n=0,sum=0;
    printf("Enter a no:- ");
    scanf("%d",&n);
 while (i<=n)
 {
   sum+=i; i++;
 } 
    printf("The sum is: %d",sum);
    return 0;
 }