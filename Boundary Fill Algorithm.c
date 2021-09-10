#include<stdio.h>             // Standard Library for input-output functions 
#include<graphics.h>          // Library for Graphic Functions
#include<dos.h>               // contains delay function
#include<conio.h>             // For console input-output


void boundaryFill4(int x, int y, int fillColor, int bColor){
  if(getpixel(x,y)!=bColor && getpixel(x,y)!=fillColor){
    delay(5);
    putpixel(x, y, fillColor);
    boundaryFill4(x+1, y, fillColor, bColor);
    boundaryFill4(x, y+1, fillColor, bColor);
    boundaryFill4(x-1, y, fillColor, bColor);
    boundaryFill4(x, y-1, fillColor, bColor);
  }
}

int main(){
  int gDriver=DETECT, gMode, xc, yc, radius;
  initgraph(&gDriver, &gMode, "C:\\TURBOC3\\BGI");
  
  printf("\nBoundary Fill Algorithm");
  printf("\n\nFirst Square filled by 4 connected approach");
  
  rectangle(100, 150, 150, 200);
  boundaryFill4(125, 175, 7, 15);
  
  closegraph();
  return 0;
}
