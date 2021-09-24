#include <stdio.h>
#include <dos.h>
#include <graphics.h>
#include <conio.h>
#include <math.h>


int main(){
    int gDriver=DETECT, gMode, x1, y1, x2, y2, x3, y3, angle;
    initgraph(&gDriver, &gMode, "C:\\TURBOC3\\BGI");

    printf("2D Shearing Transformation\n");
    x1=100; y1=100;
    x2=100; y2=150;
    x3=150; y3=150;

    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x1, y1, x3, y3);

    printf("\nEnter value of angle: ");
    scanf("%d", &angle);

    x1+=floor(y1*tan(angle*3.14/180));
    x2+=floor(y2*tan(angle*3.14/180));
    x3+=floor(y3*tan(angle*3.14/180));

    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x1, y1, x3, y3);

    printf("\nPress any key to exit... ");
    scanf("%d");

    return 0;
}
