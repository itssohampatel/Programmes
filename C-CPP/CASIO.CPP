#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int x1=190,x2=215,x3=225,y1=178,y2=248,y3=303;
void key1(int i,int j,int k);
void key2(int i,int j);
void key3(int i,int j);
void key4(int i,int j);
int main()
{
 int gd=0,gm;
 char ch;
 initgraph(&gd,&gm,"");
 outtextxy(300,100,"CASIO");
 outtextxy(260,350,"MADE BY MR.333");
 rectangle(182,170,539,311);
 setcolor(2);
 rectangle(189,178,531,300);
 rectangle(481,178,500,247);
 key1(0,0,0);
 key2(0,0);
 key2(265,265);
 key4(0,0);
 key3(0,0);
 key4(41,41);
 key1(112,112,112);
 key1(265,265,265);
 key4(112,112);
 key2(112,112);
 key4(153,153);
 key2(153,153);
 key4(194,194);
 key3(153,153);

  while(1)
 { ch=getch();
  switch(ch)
	{
	  case 'a':
		  setfillstyle(1,8);
		  floodfill(200,200,2);
		  sound(800);
		  delay(200);
		  nosound();
		  setfillstyle(1,15);
		  floodfill(200,200,2);
		  break;
	  case 'w'://key2(0,0);
		  setfillstyle(1,8);
		  floodfill(230,200,2);
		  sound(932);
		  delay(200);
		  nosound();
		  setfillstyle(1,0);
		  floodfill(230,200,2);
		  break;
	  case 's':
		  key4(0,0);
		  setfillstyle(1,8);
		  floodfill(250,200,2);
		  sound(988);
		  delay(200);
		  nosound();
		  setfillstyle(1,15);
		  floodfill(250,200,2);
		  break;
	  case 'e':
		  key3(0,0);
		  setfillstyle(1,8);
		  floodfill(260,200,2);
		  sound(1047);
		  delay(200);
		  nosound();
		  setfillstyle(1,0);
		  floodfill(260,200,2);
		  break;
	  case 'd':
		  key4(41,41);
		  setfillstyle(1,8);
		  floodfill(280,200,2);
		  sound(1109);
		  delay(200);
		  setfillstyle(1,15);
		  floodfill(280,200,2);
		  nosound();
		  break;
	  case 'f':
		  key1(112,112,112);
		  setfillstyle(1,8);
		  floodfill(310,200,2);
		  sound(1174);
		  delay(200);
		  nosound();
		  setfillstyle(1,15);
		  floodfill(310,200,2);
		  break;
	  case 't':
		  key4(112,112);
		  setfillstyle(1,8);
		  floodfill(340,200,2);
		  sound(1245);
		  delay(200);
		  nosound();
		  setfillstyle(1,0);
		  floodfill(340,200,2);
		  break;
	  case 'g':
		  key2(112,112);
		  setfillstyle(1,8);
		  floodfill(360,200,2);
		  sound(1319);
		  delay(200);
		  nosound();
		  setfillstyle(1,15);
		  floodfill(360,200,2);
		  break;
	  case 'y':
		  key4(153,153);
		  setfillstyle(1,8);
		  floodfill(370,200,2);
		  sound(1397);
		  delay(200);
		  nosound();
		  setfillstyle(1,0);
		  floodfill(370,200,2);
		  break;
	  case 'h':
		  key2(153,153);
		  setfillstyle(1,8);
		  floodfill(400,200,2);
		  sound(1480);
		  delay(200);
		  nosound();
		  setfillstyle(1,15);
		  floodfill(400,200,2);
		  break;
	  case 'u':
		  key4(194,194);
		  setfillstyle(1,8);
		  floodfill(425,200,2);
		  sound(1568);
		  delay(200);
		  nosound();
		  setfillstyle(1,0);
		  floodfill(425,200,2);
		  break;
	  case 'j':
		  key3(153,153);
		  setfillstyle(1,8);
		  floodfill(435,200,2);
		  sound(1661);
		  delay(200);
		  nosound();
		  setfillstyle(1,15);
		  floodfill(435,200,2);
		  break;
	  case 'k':
		  setfillstyle(1,8);
		  floodfill(475,200,2);
		  sound(1760);
		  delay(200);
		  nosound();
		  setfillstyle(1,15);
		  floodfill(475,200,2);
		  break;
	  case 'o':
		  setfillstyle(1,8);
		  floodfill(495,200,2);
		  sound(1864);
		  delay(200);
		  nosound();
		  setfillstyle(1,0);
		  floodfill(495,200,2);
		  break;
	  case 'l':
		  setfillstyle(1,8);
		  floodfill(505,200,2);
		  sound(1975);
		  delay(200);
		  nosound();
		  setfillstyle(1,15);
		  floodfill(505,200,2);
		  break;
	  case 'p':
		  setfillstyle(1,8);
		  floodfill(525,200,2);
		    sound(2093);
		  delay(200);
		  nosound();
		  setfillstyle(1,0);
		  floodfill(525,200,2);
		  break;

	  case ' ':
		  outtextxy(300,400,"FINISH");
		  break;
	 }
	    if(ch==27)
	       break;
    }
 closegraph();
 return 0;
 }


  void key1(int i,int j,int k)
  {
    x1=190+i;
    x2=215+j;
    x3=225+k;
    setcolor(2);
    int poly1[]={x1,y1,x2,y1,x2,y2,x3,y2,x3,y3,x1,y3,x1,y1};
    setcolor(2);
     setfillstyle(1,15);
    fillpoly(7,poly1);
  }
  void key2(int i ,int j)
  {
   x2=215+i;
   x3=225+j;
   int poly2[]={x3+1,y2,x3+11,y2,x2+21,y1,x2+41,y1,x3+31,y2,x3+41,y2,x3+41,y3,x3+1,y3,x3+1,y2};
    setcolor(2);
    setfillstyle(1,15);
   fillpoly(9,poly2);

  }
  void key3(int i,int j)
  {
    x2=215+i;
    x3=225+j;
    int poly3[]={x3+1+41,y2,x3+11+41,y2,x2+21+41,y1,x2+45+41,y1,x3+35+41,y3,x3+41+1,y3,x3+41+1,y2};
     setcolor(2);
     setfillstyle(1,15);
    fillpoly(7,poly3);
  }
   void key4(int i,int j)
   {
     x2=215+i;
     x3=225+j;
     int poly4[]={x2+1,y1,x2+20,y1,x3+10,y2-1,x2+1,y2-1,x2+1,y1};
      setcolor(2);
      setfillstyle(1,0);
     fillpoly(5,poly4);

    }
