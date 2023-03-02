/*
  write a program to read a,b and c in a quadratic equation, determine
  the root and display a,b,c and the roots
*/

#include <stdio.h>
#include <stdlib.h>

int getno(char *x){ //get the number for each value
    int v = 0;
    printf("WHAT IS %s ", x);
    scanf("%d", &v);
    return v;
}

int main()
{ int a = 0;  //a
  int b = 0;  //b
  int c = 0;  //c
  int r1 = 0; //root 1
  int r2 = 0; //root2
  int x = 0;
  int d = 0;  //determinant

  printf("(a)X2 + (b)X + (c) = 0 \n");
  a = getno("a");                              //get a
  printf("%dx2 + (b)X + (c) = 0 \n",a);
  b = getno("b");                              //get b
  printf("%dx2 + %dx + (c)= 0 \n",a, b);
  c = getno("c");                              // get c
  printf("%dx2 + %dx +%d = 0 \n",a, b, c);

    d = (b*b) - (4*a*c);                       //get determinant
    x =(int)(pow(d,0.5) + 1e-9);               //solve the numerator
    r1 = (-b + x) / (a*2);                     //get root 1
    r2 = (-b - x) / (a*2);                     //get root 2

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
