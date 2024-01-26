#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
int i,j,height=20,width=20,fruitx,fruity,snakex,snakey,gameover=0,d,score=0;

void fruit();
void snake();
void map();
void direction();
void moving();

void fruit()
{
 fruitx=rand()%19;
 fruity=rand()%19;
 if(fruitx<2 || fruity<2)
 fruit();
}

void snake()
{
 snakex=rand()%20;
 snakey=rand()%20;

}

void map()
{ clrscr();
  for(i=1;i<=width;i++)
  {
   for(j=1;j<=height;j++)
   if(i==1 || i==20 || j==1 || j==20)
      cout<<"#";
   else if(i==fruitx && j==fruity)
      cout<<"o";
   else if(i==snakex && j==snakey)
      cout<<"*";
   else
      cout<<" ";
   cout<<"\n";
  }
}

void direction()
{
 if(kbhit())
 {
  switch(getch())
  {
   case 'w' : d=1;
	      break;
   case 's' : d=2;
	      break;
   case 'a' : d=3;
	      break;
   case 'd' : d=4;
	      break;
   default : exit(0);
  }
 }
}

void moving()
{
 switch(d)
 {
  case 1 : snakex--;
	   break;
  case 2 : snakex++;
	   break;
  case 3 : snakey--;
	   break;
  case 4 : snakey++;
	   break;
 }
 if(snakex==1 || snakex==20 || snakey==1 || snakey==20)
   gameover=1;
 if(snakex==fruitx && snakey==fruity)
 {
  fruit();
  score++;
 }
}

void main()
{
 clrscr();
 fruit();
 snake();
 while(gameover==0)
 {
  map();
  direction();
  moving();
  for(int k=0;k<=5000;k++) {for(int h=0;h<=10000;h++){}}
 }
 cout<<"gameover....!!!!\n";
 cout<<"score = "<<score;
 getch();
}