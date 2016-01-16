#include<graphics.h>
#include<math.h>

void main()
{

	int gd=DETECT,gm=VGAMAX;
	float i,j,xr,xy,x,y;
	initgraph(&gd,&gm,0);
	int a[]={50,100,100,100,100,150,150,150,150,200,200,200,200,250,250,250,250,300,300,300,300,350,50,350,50,100};
	
	fillpoly(13,a);
	
	setcolor(RED);
	pieslice(75,75,0,360,25);
	xr=75;xy=75;
	delay(100);
	
	for(j=0;j<5;j++)
	{
	x=xr+25;y=xy;
	for(i=180;i<=360;i++)
	{	
		cleardevice();
		setcolor(WHITE);
		fillpoly(13,a);
		setcolor(RED);
		pieslice(x+25*cos(i*3.14/180),y+25*sin(i*3.14/180),0,360,25);
		delay(10);
		xr=x+25*cos(i*3.14/180);
		xy=y+25*sin(i*3.14/180);
	}
	for(i=0;i<50;i++)
	{	
		xy++;
		cleardevice();
		setcolor(WHITE);
		fillpoly(13,a);
		setcolor(RED);
		pieslice(xr,xy,0,360,25);
		delay(10);
	}
	}
	getch();
	closegraph();
}
