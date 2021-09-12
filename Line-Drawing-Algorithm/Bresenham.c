#include <stdio.h>			// Include all the required header files
#include <dos.h>
#include <graphics.h>
#include <conio.h>
#include <math.h>

void bresenham(int x1, int y1, int x2, int y2){		// Function for Bresenham Line Drawing Algorithm
    int dx, dy, p, x, y;				// Declaring some variables for computation
    dx = (x2-x1);					// Difference between the x-coordinates of endpoints
    dy = (y2-y1);					// Difference between the y-coordinates of endpoints  
    x = x1;						// Initializing x variable
    y = y1;						// Initializing y variable
    p = 2*dy -dx;					// Initializing Decision Parameter			

    while(x<x2){
	if(p>=0){
	    putpixel(x,y,RED);				// Plotting a pixel at (x,y) coordinate with RED Color
	    y += 1;					// Incrementing y
	    p += 2*dy -2*dx;				// Computing next decision parameter
	}
	else{
	    putpixel(x,y,RED);				// Plotting a pixel at (x,y) coordinate with RED Color
	    p += 2*dy;					// Computing next decision parameter
	}
	x += 1;						// Incrementing x
	delay(100);					// Delay for better visualization of output.
    }
}

int main(){
    int gdriver=DETECT, gmode, x1, y1, x2, y2;		// Declaring some variables.
    initgraph(&gdriver, &gmode, "c:\\TURBOC3\\BGI");	// Entering the GRAPHICS Mode.
							// NOTE:- The path must be entered as per your system path.

    printf("Bresenham Line Drawing Algorithm\n\n");
    printf("Enter co-ordinate of first point: ");
    scanf("%d %d", &x1, &y1);				// User Input for first endpoint coordinates of the line

    printf("Enter co-ordinate of second point: ");
    scanf("%d %d", &x2, &y2);				// User Input for second endpoint coordinates of the line

    if ((y2-y1)/(x2-x1) <=1){				// If Slope is less than 1;
	drawline(x1,y1, x2,y2);				// Drawline Function is under the Graphics header file.
    }							// It inputs endpoints of line as parameters and draws a line. 
    else{
	drawline(y1,x1, y2,x2);
    }
	
    printf("Print any key to exit..");
    scanf("%d");					
    closegraph();					// Exit the GRAPHICS Mode.

    return 0;
}
