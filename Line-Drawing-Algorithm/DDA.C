#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <dos.h>

void main(){
    int x1, y1, x2, y2;					// Declaring some variables for endpoints of line.
    float dx, dy, x, y, step;				// Declaring some variables for computation.
    int i, gdriver = DETECT, gmode;			// Variables used by Graphics Library.
    initgraph(&gdriver, &gmode, "c:\\TURBOC3\\BGI");   // Enter the GRAPHIC MODE
		// NOTE : Enter the path as per your system. 

    printf("DDA Line Drawing Algorithm\n\n");
    printf("Enter value of x1 and y1: ");
    scanf("%d%d", &x1, &y1);				// Accepting user input for (x1,y1) i.e. first endpoint of line.

    printf("Enter value of x2 and y2: ");
    scanf("%d%d", &x2, &y2);				// Accepting user input for (x2,y2) i.e. second endpoint of line.

    dx = abs(x2-x1);					// Absolute Difference between x2 and x1 
    dy = abs(y2-y1);					// Absolute Difference between y2 and y1 

    if (dx >= dy)					// Initializing the step variable as per the given condition.
		step = dx;
    else
		step = dy;

    dx /= step;						// Updating the dx and dy variables.
    dy /= step;

    x = x1;						// These x and y variables will be used in while loop
    y = y1;

    i = 1;
    while (i <= step){					// Entering the while loop
	putpixel(x,y,RED);				// Plotting the pixel at x,y with RED Color.
	x += dx;					// Incrementing the x,y and i variable.
	y += dy;
	i += 1;
	delay(100);					// Using Delay function (under dos.h library) for better visualization. 
    }
    getch();
    closegraph();					// Closegraph - exit the GRAPHICS MODE
}
