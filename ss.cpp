#include <STDIO.H>
void main(void)
{
int x, y, z;
for (x=0; x<=100; x++)
for (y=0; y<=100; y++) {
if ((z=3*x+2*y-5)%7) 
   continue;
   z/=7; 
if (z>=0 && z<=100) 
printf("x=%d, y=%d, z=%d\n", x, y, z);
}
}
