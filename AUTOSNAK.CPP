#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<graphics.h>
class snake
{
   private:
	 struct cord
	 {int x,y;};
	 cord h,t[1000],fd;
	 int f;
	 int gd,gm;
   public:
	 void block(int,int,int=15);
	 snake(int=0);
	 void food();
	 void right();
	 void down();
	 void left();
	 void up();
	 void automove();
	 ~snake(){closegraph();}
};
void snake::block(int x,int y,int c)
{
   for(int i=0;i<9;i++)
   {
	  for(int j=0;j<9;j++)
	  {
		 putpixel(x+i,y+j,c);
	  }
   }
}
void snake::food()
{
   if(h.x==fd.x && h.y==fd.y)
   {
	  f++;
	  fd.x=(random(63)+1)*10;
	  fd.y=(random(47)+1)*10;
	  block(fd.x,fd.y);
   }
}
snake::snake(int at)
{
	fd.x=200;
	fd.y=200;
	f=0;
	h.x=100;
	h.y=100;
	gd=0;
	initgraph(&gd,&gm,"");
	block(fd.x,fd.y);
	if(at==97)automove();
}
void snake::right()
{
	while(!kbhit())
	{
	   if(f==0)
	   {t[1]=t[0]=h;}
	   else
	   {
		  t[0]=t[f];
		  for(int j=f;j>1;j--)
		  {t[j]=t[j-1];}
		  t[1]=h;
	   }
	   h.x+=10;
	   block(h.x,h.y);
	   for(int j=1;j<=f;j++)
		 block(t[j].x,t[j].y);
	   block(t[0].x,t[0].y,0);
	   food();
	   delay(100);
	}
}
void snake::down()
{
	while(!kbhit())
	{
	   if(f==0)
	   {t[1]=t[0]=h;}
	   else
	   {
		  t[0]=t[f];
		  for(int j=f;j>1;j--)
		  {t[j]=t[j-1];}
		  t[1]=h;
	   }
	   h.y+=10;
	   block(h.x,h.y);
	   for(int j=1;j<=f;j++)
		 block(t[j].x,t[j].y);
	   block(t[0].x,t[0].y,0);
	   food();
	   delay(100);
	}
}
void snake::left()
{
	while(!kbhit())
	{
	   if(f==0)
	   {t[1]=t[0]=h;}
	   else
	   {
		  t[0]=t[f];
		  for(int j=f;j>1;j--)
		  {t[j]=t[j-1];}
		  t[1]=h;
	   }
	   h.x-=10;
	   block(h.x,h.y);
	   for(int j=1;j<=f;j++)
		 block(t[j].x,t[j].y);
	   block(t[0].x,t[0].y,0);
	   food();
	   delay(100);
	}
}
void snake::up()
{
	while(!kbhit())
	{
	   if(f==0)
	   {t[1]=t[0]=h;}
	   else
	   {
		  t[0]=t[f];
		  for(int j=f;j>1;j--)
		  {t[j]=t[j-1];}
		  t[1]=h;
	   }
	   h.y-=10;
	   block(h.x,h.y);
	   for(int j=1;j<=f;j++)
		 block(t[j].x,t[j].y);
	   block(t[0].x,t[0].y,0);
	   food();
	   delay(100);
	}
}
void snake::automove()
{
   while(!kbhit())
   {
	   if(f==0)
	   {t[1]=t[0]=h;}
	   else
	   {
		  t[0]=t[f];
		  for(int j=f;j>1;j--)
		  {t[j]=t[j-1];}
		  t[1]=h;
	   }

	   if(fd.x>h.x)h.x+=10;
	   else if(fd.x<h.x)h.x-=10;
	   else if(fd.y>h.y)h.y+=10;
	   else if(fd.y<h.y)h.y-=10;

	   block(h.x,h.y);
	   for(int j=1;j<=f;j++)
		 block(t[j].x,t[j].y);
	   block(t[0].x,t[0].y,0);
	   food();
	   delay(100);
   }
}
int main()
{
   clrscr();
   char ch=77,past,n;
   n=getch();
   snake s(n);
   past=77;
   while(ch!=27)
   {
	  past=ch;
	  switch(ch)
	  {
		 case 77:s.right();break;
		 case 80:s.down();break;
		 case 72:s.up();break;
		 case 75:s.left();break;
	  }
	  ch=getch();
   }
   return 0;
}