#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <dos.h>

void main()
{
    int x1, y1, x2, y2;
    float dx, dy, x, y, step;
    int i, gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, "c:\\TURBOC3\\BGI");

    printf("DDA Line Drawing Algorithm\n\n");
    printf("Enter value of x1 and y1: ");
    scanf("%d%d", &x1, &y1);

    printf("Enter value of x2 and y2: ");
    scanf("%d%d", &x2, &y2);

    dx = abs(x2-x1);
    dy = abs(y2-y1);

    if (dx >= dy)
		step = dx;
    else
		step = dy;

    dx /= step;
    dy /= step;

    x = x1;
    y = y1;

    i = 1;
    while (i <= step){
		putpixel(x,y,RED);
		x += dx;
		y += dy;
		i += 1;
		delay(100);
    }
    getch();
    closegraph();
}
