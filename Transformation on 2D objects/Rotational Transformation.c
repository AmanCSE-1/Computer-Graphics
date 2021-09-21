#include <stdio.h>  // Std Input-Output Library
#include <dos.h>
#include <graphics.h>
#include <conio.h>
#include <math.h>


int main(){
    int gDriver=DETECT, gMode, x1, y1, x2, y2, x3, y3, angle;
    double c, s;
    initgraph(&gDriver, &gMode, "C:\\TURBOC3\\BGI");
    
    printf("2D Rotational Transformation\n");
    x1=100; y1=100;
    x2=100; y2=150;
    x3=150; y3=150;
    
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x1, y1, x3, y3);
    
    printf("\nEnter the angle of rotation: ");
    scanf("%d", &angle);
    
    c=cos(angle*3.14/180);
    s=sin(angle*3.14/180);
    
    x1=floor(x1*c - y1*s); y1=floor(x1*s + y1*c);
    x2=floor(x2*c - y2*s); y2=floor(x2*s + y2*c);
    x3=floor(x3*c - y3*s); y3=floor(x3*s + y3*c);
    
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x1, y1, x3, y3);
    
    printf("\nPress any key to exit... ");
    scanf("%d");
    
    return 0;
}
