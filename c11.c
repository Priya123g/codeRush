#include<stdio.h>
void main()
{
 char ch;
 int n;
  printf("\nDo you want to enter one more number(y/n):");
 scanf("%c",&ch);
 while(toupper(ch)=='Y')
 {
 printf("\nEnter your Number:\n");
 scanf("%d",&n);
 if(n%2!=0)
 printf("Entered number is odd");
 else
 printf("Entered number is even");
 }
}
