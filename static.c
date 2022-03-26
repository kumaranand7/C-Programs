#include<stdio.h>
#include<conio.h>
void fun ();
void main() {
  int i;
  for(i=1;i<=7;i++)
    fun();
    getch();
}
void fun (){
  static int num = 0;
  
  printf( "%d\n",num);
  num++;
  
}