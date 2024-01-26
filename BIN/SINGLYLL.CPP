#include<iostream.h>
#include<conio.h>

struct node
{
 int data;
 node *next;
};

class list
{
 public:
 node *head;
 node *tail;
 list()
 {
  head=NULL;
  tail=NULL;
 }
 void append(int d);
 void prepend(int d);
 void insert(int d,int posd);
 void deletenode(int d);
 void display();
};
 void list :: append(int d)
 {
  node *temp=new node;
  if(head==NULL)
  {
   temp->data=d;
   head=temp;
   tail=temp;
  }
  else
  {
   temp->data=d;
   tail->next=temp;
   tail=temp;
  }
 }

 void list :: prepend(int d)
 {
  node *temp=new node;
  if(head==NULL)
  {
   temp->data=d;
   head=temp;
   tail=temp;
  }
  else
  {
   temp->data=d;
   temp->next=head;
   head=temp;
  }
 }

 void list :: insert(int d,int posd)
 {
  node *temp=new node;
  node *ptr=head;
  while(ptr!=NULL)
  {
   if(ptr->data==posd)
   {
    temp->data=d;
    temp->next=ptr->next;
    ptr->next=temp;
    break;
   }
   ptr=ptr->next;
  }
  if(ptr==NULL)
  {
   cout<<"Node Not Find";
  }
 }

 void list :: display()
 {
  node *ptr=head;
  while(ptr!=NULL)
  {
   cout<<ptr->data<<"  ";
   ptr=ptr->next;
  }
  cout<<endl;
 }

 void list :: deletenode(int d)
 {
  node *ptr=head->next;
  node *prvptr=head;
  int del=0;
  if(head->data==d)
  {
   head=head->next;
   del=1;
  }
  else
  {
   while(ptr!=NULL)
   {
   if(ptr->data==d)
   {
    prvptr->next=ptr->next;
    del=1;
    break;
   }
   if((ptr->next)->data==d)
   {
    ptr->next=NULL;
    tail=prvptr->next;
    del=1;
   }
   prvptr=prvptr->next;
   ptr=ptr->next;
   }
   if(del==0)
   {
    cout<<"Node Not Find";
   }
  }
 }

void main()
{
 clrscr();
 list l;
 l.append(5);
 l.append(10);
 l.append(15);
 l.append(20);
 l.append(30);
 cout<<"after append   ";
 l.display();

 l.prepend(0);
 cout<<"after prepend  ";
 l.display();

 l.insert(25,20);
 cout<<"after insert   ";
 l.display();

 l.deletenode(30);
 cout<<"after delete   ";
 l.display();

 l.append(20);
 cout<<"after append   ";
 l.display();
 getch();
}