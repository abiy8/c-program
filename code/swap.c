#include<stdio.h>
int main(){
int a_261, b_261, c_261;
printf("insert two numbers to swap\n");
scanf("%d %d", &a_261,&b_261);
c_261=b_261;
b_261=a_261;
a_261=c_261;
printf("the two numbers after swap are %d %d\n", a_261,b_261);
return 0;
} 
