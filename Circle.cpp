#include<graphics.h>
int main()
{
	int g=DETECT,gm;
	initgraph(&gd,&gm," ");
	circle(250,200,50);
	getch();
	closegraph();
	return 0;
}
