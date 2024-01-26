#include<iostream.h>
#include<conio.h>
int main() 
{   clrscr();
int t,n,a[100],sum;
for(int i=1;i<=t;i++)
{
 sum=0;
 cin>>n;
for(int j=0;j<n;j++)
 {
 cin>>a[j];
sum=sum+a[j];
 }
cout<<sum<<endl;
}
getch();
return 0;
}