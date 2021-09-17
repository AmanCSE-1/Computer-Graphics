#include <stdio.h>
#include <dos.h>
#include <graphics.h>
#include <conio.h>


int main(){
    int gDriver=DETECT, gMode, x1, y1, x2, y2, x3, y3, tx, ty;
    initgraph(&gDriver, &gMode, "C:\\TURBOC3\\BGI");
    
    printf("2D Translational Transformation\n");
    x1=100; y1=100;
    x2=100; y2=150;
    x3=150; y3=150;
    
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x1, y1, x3, y3);
    
    printf("\nEnter value of tx and ty: ");
    scanf("%d %d", &tx, &ty);
    
    line(x1+tx, y1+ty, x2+tx, y2+ty);
    line(x2+tx, y2+ty, x3+tx, y3+ty);
    line(x1+tx, y1+ty, x3+tx, y3+ty);
    
    printf("\nPress any key to exit... ");
    scanf("%d");
    
    return 0;
}
