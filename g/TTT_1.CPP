#include<iostream.h>
#include<conio.h>
#include<ctype.h>
char a[9]={'1','2','3','4','5','6','7','8','9'};
char p1='X';
char p2='O';

void display();
void show();
void start();
char end();

void display()
{
 cout<<"\n\n\t\t\t\tTIC TAC TOE\n\n";
 cout<<"\nSymbol of player 1: X";
 cout<<"\nSymbol of player 2: O\n";
}

void show()
{
 cout<<"\n\n\n\n";
 cout<<"\t\t\t\t "<<a[0]<<" | "<<a[1]<<" | "<<a[2]<<"\n";
 cout<<"\t\t\t\t---|---|---\n";
 cout<<"\t\t\t\t "<<a[3]<<" | "<<a[4]<<" | "<<a[5]<<"\n";
 cout<<"\t\t\t\t---|---|---\n";
 cout<<"\t\t\t\t "<<a[6]<<" | "<<a[7]<<" | "<<a[8]<<"\n";
}

void start()
{
 int choice;
 char r;
 for(int i=0;i<=8;i++)
 {
  if(i%2==0)
  {
   cout<<"\nplayer 1 chance(X): ";
   cin>>choice;
   a[choice-1]=p1;
   if( isalpha(end()) )
   {
    r=end();
    if(r=='o')
    {
     clrscr();
     show();
     cout<<"player 1 won the game....!!!!";
    }
    else
    if(r=='t')
    {
     clrscr();
     show();
     cout<<"player 2 won the game....!!!!";
    }
    break;
   }
   clrscr();
   show();
  }
  else
  {
   cout<<"\nplayer 2 chance(O): ";
   cin>>choice;
   a[choice-1]=p2;
   if( isalpha(end()) )
   {
    r=end();
    if(r=='o')
    {
     clrscr();
     show();
     cout<<"player 1 won the game....!!!!";
    }
    else
    if(r=='t')
    {
     clrscr();
     show();
     cout<<"player 2 won the game....!!!!";
    }
    break;
   }
   clrscr();
   show();
  }
 }
 if(isdigit(end()))
 cout<<"Game is drawn....!!!!";
}

char end()
{
 char w1='o';
 char w2='t';
 if( (a[0]==p1 && a[1]==p1 && a[2]==p1) || (a[3]==p1 && a[4]==p1 && a[5]==p1) || (a[6]==p1 && a[7]==p1 && a[8]==p1) )
 return w1;
 else
 if( (a[0]==p2 && a[1]==p2 && a[2]==p2) || (a[3]==p2 && a[4]==p2 && a[5]==p2) || (a[6]==p2 && a[7]==p2 && a[8]==p2) )
 return w2;
 else
 if( (a[0]==p1 && a[3]==p1 && a[6]==p1) || (a[1]==p1 && a[4]==p1 && a[7]==p1) || (a[2]==p1 && a[5]==p1 && a[8]==p1) )
 return w1;
 else
 if( (a[0]==p2 && a[3]==p2 && a[6]==p2) || (a[1]==p2 && a[4]==p2 && a[7]==p2) || (a[2]==p2 && a[5]==p2 && a[8]==p2) )
 return w2;
 else
 if( (a[0]==p1 && a[4]==p1 && a[8]==p1) || (a[2]==p1 && a[4]==p1 && a[6]==p1) )
 return w1;
 else
 if( (a[0]==p2 && a[4]==p2 && a[8]==p2) || (a[2]==p2 && a[4]==p2 && a[6]==p2) )
 return w2;
 else return 48;
}

void main()
{
 clrscr();
 display();
 show();
 start();
 getch();
}

