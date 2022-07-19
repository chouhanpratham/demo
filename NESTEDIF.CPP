#include<conio.h>
#include<stdio.h>
void main()
{
 int a,b,c;
 clrscr();
 printf("Enter three Numbers:");
 scanf("%d %d %d",&a,&b,&c);
 printf("Greatest number is:\n");
 if(a>b)
 {
  if(a>c)
    printf("%d",a);
  else
    printf("%d",c);
 }
 else
 {
  if(b>c)
    printf("%d",b);
  else
    printf("%d",c);
 }
 getch();

}
