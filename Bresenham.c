#include <stdio.h>
#include <dos.h>
#include <graphics.h>
#include <conio.h>
#include <math.h>

void drawline(int x1, int y1, int x2, int y2){
    int dx, dy, p, x, y;
    dx=(x2-x1);
    dy=(y2-y1);
    x=x1;
    y=y1;
    p=2*dy -dx;

    while(x<x2){
		if(p>=0){
		    putpixel(x,y,RED);
		    y += 1;
		    p += 2*dy -2*dx;
		}
		else{
		    putpixel(x,y,RED);
		    p += 2*dy;
		}
		x += 1;
		delay(100);
    }
}

int main(){
    int gdriver=DETECT, gmode, x1, y1, x2, y2;
    initgraph(&gdriver, &gmode, "c:\\TURBOC3\\BGI");

    printf("Bresenham Line Drawing Algorithm\n\n");
    printf("Enter co-ordinate of first point: ");
    scanf("%d %d", &x1, &y1);

    printf("Enter co-ordinate of second point: ");
    scanf("%d %d", &x2, &y2);

    if ((y2-y1)/(x2-x1) <=1){
		drawline(x1,y1, x2,y2);
    }
    else{
		drawline(y1,x1, y2,x2);
    }
    scanf("%d");
    closegraph();

    return 0;
}
