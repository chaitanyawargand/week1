#include <stdio.h>
#include <math.h>
int main() {
  float V,S,T,H;
  int u,a,t,b,c,p;
  printf("enter the value of u: ");
  scanf("%d",&u);
  printf("enter the value of a: ");
  scanf("%d",&a);
  printf("enter the value of t: ");
  scanf("%d",&t);
  printf("enter the value of b: ");
  scanf("%d",&b);
  printf("enter the value of c: ");
  scanf("%d",&c);
  printf("enter the value of p: ");
  scanf("%d",&p);
  V=u+a*t;
  S=u*t+1/2*(a*(t*t));
  T=2*a+sqrt(b)+9*c;
  H=sqrt((b*b)+(p*p));

  printf("the value of v = %f\n",V);
  printf("the value of s = %f\n",S);
  printf("the value of t = %f\n",T);
  printf("the value of H = %f\n",H);
 return 0;
}
