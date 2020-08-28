Algorithm:
Step1: Put x =0, y =r in equation 2
            We have p=1-r
Step2: Repeat steps while x ≤ y
            Plot (x, y)
            If (p<0)
Then set p = p + 2x + 3
Else
            p = p + 2(x-y)+5
            y =y - 1 (end if)
            x =x+1 (end loop)


//program

#include<stdio.h>
#include<graphics.h>
void drawcircle(int x0, int y0, int radius)
{
    int x = radius;
    int y = 0;
    int err = 0;
    while (x >= y)
    {
	putpixel(x0 + x, y0 + y, 7);
	putpixel(x0 + y, y0 + x, 7);
	putpixel(x0 - y, y0 + x, 7);
	putpixel(x0 - x, y0 + y, 7);
	putpixel(x0 - x, y0 - y, 7);
	putpixel(x0 - y, y0 - x, 7);
	putpixel(x0 + y, y0 - x, 7);
	putpixel(x0 + x, y0 - y, 7);
	if (err <= 0)
	{
	    y += 1;
	    err += 2*y + 1;
	}
	if (err > 0)
	{
	    x -= 1;
	    err -= 2*x + 1;
	}   }
}
void main()
{
	int gdriver=DETECT, gmode, error, x, y, r;
	initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");
	printf("Enter radius of circle: ");
	scanf("%d", &r);
	printf("Enter co-ordinates of center(x and y): ");
	scanf("%d%d", &x, &y);
	drawcircle(x, y, r);
	getch();
}






























































