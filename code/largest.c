#include<stdio.h>
int main(){
int a_261,b_261;
printf("enter two numbers to compare\n");
scanf("%d %d",&a_261,&b_261);
if(a_261>b_261)
{
printf("the largest number is %d\n",a_261);
}
else if(a_261==b_261)
{
printf("the two numbers are equal\n");
}
else
{
printf("the largest number is %d\n",b_261);
}
return 0;
}
