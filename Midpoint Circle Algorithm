#include <stdio.h>                              // Header file for Standard Input-Output functions
#include <graphics.h>                           // Header file for Graphic functions
#include <dos.h>                                // Contains delay function
#include <conio.h>                              // For console input-output


void midpoint(int xc, int yc, int radius){
  int pk=1-radius, x=0, y=radius;
  
  while(x<=y){
    putpixel(xc+x, yc+y, 7);
    putpixel(xc+y, yc+x, 7);
    putpixel(xc-y, yc+x, 7);
    putpixel(xc-x, yc+y, 7);
    putpixel(xc-x, yc-y, 7);
    putpixel(xc-y, yc-x, 7);
    putpixel(xc+y, yc-x, 7);
    putpixel(xc+x, yc-y, 7);
    
    if(pk<0){
      pk += 2*x +1;
    }
    else{
      y--;
      pk += 2*(x-y) +1;
    }
    
    x++;
    delay(200);
  }
}


int main(){
  int gdriver=DETECT, gmode, xc, yc, radius;
  initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");
  
  printf("\nMidPoint Circle Drawing Algorithm");
  printf("Enter the radius of circle: ");
  scanf("%d", &radius);
  
  printf("Enter center coordinates: ");
  scanf("%d %d", &xc, &yc);
  
  midpoint(xc, yc, radius);
  closegraph();
  return 0;
}
 
