#include<stdio.h>
int main(void){
int choice,a,b,c;
printf("\n\tpress 1 for addition\n\tpress 2 for substraction\n\tpress 3 for multiplication\n\tpress 4 for division\n");
scanf("%d",&choice);
switch(choice){
case 1: printf("enter two numbers:");
scanf("%d%d",&a,&b);
c=a+b;
printf("%d is the sum",c);
break;
case 2: printf("enter two numbers:");
scanf("%d%d",&a,&b);
c=a-b;
break;
case 3: printf("enter two numbers:");
scanf("%d%d",&a,&b);
c=a*b;
break;
case 4: printf("enter two numbers:");
scanf("%d%d",&a,&b);
c=a/b;
break;
default: printf("the number choice you entered is not between 1 and 4. please, try again\n");
}
return 0;
}
