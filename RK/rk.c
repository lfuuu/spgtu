#include <stdio.h>
 
double input()
{
  int x;
 printf("Введите количество коробок: ");
 while(scanf("%d",&x)!=1)
   {
     while(getchar()!='\n');
     printf("Ошибка");
   }
   return(x);
   }
 
int main()
{
  double v=0;
  int a=10,i, x;
  x = input();
  for ( i = 1; i <= x; i++ ) 
   {
     v=v+(a*a*a);
     a=a+1;
   }
 v=v/1000;
 printf("Суммарный объем коробок равен: %.2lf\n",v);
}
