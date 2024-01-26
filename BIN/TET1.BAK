#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

int i,j,r,c,e=' ';
char m[20][20];

void map();
void insert_shape();
void select_shape();
void s_0();
void s_1();
void s_2();
void s_3();
void s_4();
void s_5();
void s_6();

void map()
{
 //playing Area.....
// char m[20][20];

 for(r=0;r<=19;r++)
 {
	for(c=0;c<=19;c++)
		{
			if(r==0 || r==19 || c==0 || c==19)
				m[r][c]='#';

			else
				m[r][c]=e;
		}
  }
}

void insert_shape()
{
 for(r=0;r<=19;r++)
 {
	for(c=0;c<=19;c++)
		{
			if(r==1 && c==6)
				select_shape();
			else
				m[r][c]=e;
		}
 }
  for(r=0;r<=19;r++)
  {
	for(c=0;c<=19;c++)
	{
		cout<<m[r][c];
	}
	cout<<"\n";
  }
}

void select_shape()
{
 //select the shape to be display
 //srand(time(NULL));
 //int s=rand()%7;
 int s=1;
 switch(s)
 {
  case 0:s_0();
	 break;
  case 1:s_1();
	 break;
  case 2:s_2();
	 break;
  case 3:s_3();
	 break;
  case 4:s_4();
	 break;
  case 5:s_5();
	 break;
  case 6:s_6();
	 break;
 }
}

void s_0()
{
 //	|****|	|*...|
 //     |....|  |*...|
 //     |....|  |*...|
 //     |....|  |*...|
 char s0[4][4];
 s0[0][0]='*';	s0[0][1]='*';	s0[0][2]='*';	s0[0][3]='*';
 s0[1][0]=e;	s0[1][1]=e;	s0[1][2]=e;	s0[1][3]=e;
 s0[2][0]=e;	s0[2][1]=e;	s0[2][2]=e;	s0[2][3]=e;
 s0[3][0]=e;	s0[3][1]=e;	s0[3][2]=e;	s0[3][3]=e;
 for(i=0;i<4;i++)
 {
  for(j=0;j<4;j++)
  {
   if(s0[i][j]!=e)
   m[r][c]=s0[i][j];
	c++;
  }
  r++;
 }
}

void s_1()
{
 //	|**|
 //     |**|
 char s1[2][2];
 s1[0][0]='*';	s1[0][1]='*';
 s1[1][0]='*';	s1[1][1]='*';
 for(i=0;i<4;i++)
 {
  for(j=0;j<4;j++)
  {
   if(s1[i][j]!=e)
   m[r][c]=s1[i][j];
	c++;
  }
  r++;
 }
}

void s_2()
{
 //	|*..|	|.**|
 //	|**.|   |**.|
 //	|.*.|   |...|
 char s2[3][3];
 s2[0][0]='*';	s2[0][1]=e;	s2[0][2]=e;
 s2[1][0]='*';	s2[1][1]='*';	s2[1][2]=e;
 s2[2][0]=e;	s2[2][1]='*';	s2[2][2]=e;
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   cout<<s2[i][j];
  }
  cout<<"\n";
 }
}

void s_3()
{
 //	|.*.|	|**.|
 //	|**.|   |.**|
 //	|*..|   |...|
 char s3[3][3];
 s3[0][0]=e;	s3[0][1]='*';	s3[0][2]=e;
 s3[1][0]='*';	s3[1][1]='*';	s3[1][2]=e;
 s3[2][0]='*';	s3[2][1]=e;	s3[2][2]=e;
  for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   cout<<s3[i][j];
  }
  cout<<"\n";
 }
}

void s_4()
{
 //	|...|	|*..|	|***|	|..*|
 //	|.*.|   |**.|   |.*.|   |.**|
 //	|***|   |*..|   |...|   |..*|
 char s4[3][3];
 s4[0][0]=e;	s4[0][1]=e;	s4[0][2]=e;
 s4[1][0]=e;	s4[1][1]='*';	s4[1][2]=e;
 s4[2][0]='*';	s4[2][1]='*';	s4[2][2]='*';
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   cout<<s4[i][j];
  }
  cout<<"\n";
 }
}

void s_5()
{
 //	|*..|	|***|	|.**|	|...|
 //	|*..|   |*..|   |..*|   |..*|
 //	|**.|   |...|   |..*|   |***|
 char s5[3][3];
 s5[0][0]='*';	s5[0][1]=e;	s5[0][2]=e;
 s5[1][0]='*';	s5[1][1]=e;	s5[1][2]=e;
 s5[2][0]='*';	s5[2][1]='*';	s5[2][2]=e;
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   cout<<s5[i][j];
  }
  cout<<"\n";
 }
}

void s_6()
{
 //	|**.|	|***|	|..*|	|...|
 //	|*..|   |..*|   |..*|   |*..|
 //	|*..|   |...|   |.**|   |***|
 char s6[3][3];
 s6[0][0]='*';	s6[0][1]='*';	s6[0][2]=e;
 s6[1][0]='*';	s6[1][1]=e;	s6[1][2]=e;
 s6[2][0]='*';	s6[2][1]=e;	s6[2][2]=e;
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   cout<<s6[i][j];
  }
  cout<<"\n";
 }
}

void main()
{
 clrscr();
 map();
 insert_shape();
 //select_shape();
 getch();
}