#include<stdio.h>
int main(){
int tot_mark,t;
printf("enter the total mark");
scanf("%d",&tot_mark);
t=tot_mark/10;
switch(t)
{
case 9:printf("grade is O");
break;
case 8:printf("grade is E");
break;
case 7:printf("grade is A");
break;
case 6:printf("grade is B");
break;
default:printf("FAIL");
}
return 0;
}
