#include <stdio.h>
#include <math.h>
int main() {
  int m,h,v;
  float g=9.81,e;
  printf("\nenter the value of mass: ");
  scanf("%d",&m);
  printf("\nenter the value of height: ");
  scanf("%d",&h);
  printf("\nenter the value of velocity: ");
  scanf("%d",&v);
  e=(float)(m*(g*h)+(1.0/2*(m*(v*v))));
  printf("\nthe value of E is %f ",e);
  return 0;
}
