#include<stdio.h>
#include<conio.h>
main()
{  int i=2,j=3,k,l;
   float a,b;
   clrscr();
   k=i/j*j;
   l=j/i*i;
   a=i/j*j;
   b=j/i*i;
   printf("%d  %d  %f  %f\n",k,l,a,b);
   getch();
}