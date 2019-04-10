#include<iostream>
#include<graphics.h>
int main(){
	int m=0,n=0;
	initgraph(&m,&n,"");
	circle(200,200,20);
	getch();
	closegraph();
	return 0;
}
