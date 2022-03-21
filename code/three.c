#include<stdio.h>
int main(){
int a,b,c;
printf("enter three numbers to compare\n");
scanf("%d %d %d",&a,&b,&c);
if(a>b)
{
if(a>c)
printf("the largest number is %d\n",a);
else
printf("%d is greatest",c);
}
else if(b>c)

printf("%d is greatest\n",b);

else

printf("%d is greatest\n",c);

return 0;
}
