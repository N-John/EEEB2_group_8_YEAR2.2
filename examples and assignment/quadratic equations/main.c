#include <stdio.h>
#include <stdlib.h>

int getno(char *x){
    int v = 0;
    printf("WHAT IS %s ", x);
    scanf("%d", &v);
    return v;
}


int main()
{ int a = 0;
  int b = 0;
  int c = 0;

  printf("(a)X2 + (b)X + (c) = 0 \n");
  a = getno("a");
  printf("%dx2 + (b)X + (c) = 0 \n",a);
  b = getno("b");
  printf("%dx2 + %dx + (c)= 0 \n",a, b);
  c = getno("c");
  printf("%dx2 + %dx +%d = 0 \n",a, b, c);

    int r1 = 0;
    int r2 = 0;
    int x = 0;
    int d = 0;

    d = (b*b) - (4*a*c);
    x =(int)(pow(d,0.5) + 1e-9);
    r1 = (-b + x) / (a*2);
    r2 = (-b - x) / (a*2);


  printf("WITH a AS %d, b AS %d AND c AS %d\n", a, b, c);
  if(d >0){
    printf(" EQUATION HAS 2 DISTINCT AND REAL ROOTS  %d AND  %d\n", r1, r2);
  }
  if(d <0){
    printf(" EQUATION HAS 2 COMPLEX ROOTS %d AND  %d\n", r1, r2);
  }
  if(d ==0){
    printf(" EQUATION HAS ONLY 1 DISTINCT ROOT%d\n", r1);
  }



  return 0;
}
