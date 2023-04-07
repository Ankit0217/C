# include<stdio.h>
int sum(int );
int main()
{
int n=10;
 printf("%d",sum(n));   
}
int sum(int n)
{
   int c; 
    if (n==1)
    return 1;
    c=n+sum(n-1);
    return c;
}