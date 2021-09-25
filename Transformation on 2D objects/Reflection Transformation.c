#include <stdio.h>
#include <dos.h>
#include <graphics.h>
#include <conio.h>


int main(){
    int gDriver=DETECT, gMode, x1, y1, x2, y2, x3, y3;    // (x1,y1), (x2,y2), (x3,y3) are vertices of triangle
    initgraph(&gDriver, &gMode, "C:\\TURBOC3\\BGI");
  
    printf("2D Reflection Transformation\n");
    x1=100; y1=100;                                       // Initializing values of vertices 
    x2=100; y2=150;
    x3=150; y3=150;
  
    line(x1, y1, x2, y2);                                 // Drawing the triangle 
    line(x2, y2, x3, y3);
    line(x1, y1, x3, y3);
  
    printf("\nRelection about X-axis is : ");
    line(0, 200, 250, 200);                               // Drawing the X-Axis line 
  
    // New coordinates (x1,y1)' = (x1, y1+200)
    // New coordinates (x2,y2)' = (x2, y2+100)
    // New coordinates (x3,y3)' = (x3, y3+100)
    line(x1, y1+200, x2, y2+100);                         
    line(x2, y2+100, x3, y3+100);                         
    line(x1, y1+200, x3, y3+100);                         
  
    printf("\nPress any key to exit... ");
    scanf("%d");
  
    return 0;
}
