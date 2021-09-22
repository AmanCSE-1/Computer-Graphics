#include <stdio.h>
#include <dos.h>
#include <graphics.h>
#include <conio.h>

int main(){
    int gDriver=DETECT, gMode, x1, y1, x2, y2, x3, y3, sx, sy;
    initgraph(&gDriver, &gMode, "C:\\TURBOC3\\BGI");

    printf("2D Scaling Transformation\n");
    x1=100; y1=100;
    x2=100; y2=150;
    x3=150; y3=150;

    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x1, y1, x3, y3);

    
    printf("\nEnter the Scaling factor in x and y: ");
    scanf("%d %d",&sx, &sy);

    x1*=sx; y1*=sy;
    x2*=sx; y2*=sy;
    x3*=sx; y3*=sy;
  
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x1, y1, x3, y3);

    printf("\nPress any key to exit... ");
    scanf("%d");

    return 0;
}
