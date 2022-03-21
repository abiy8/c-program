#include<stdio.h>
int main(){
int a=21;
int c;
c=a;printf("Line 1-=operator example, value of c=%d\n",c);
c +=a;printf("Line 2- +=operator example, value of c=%d\n",c);
c -=a;printf("Line 3- -=operator example, value of c=%d\n",c);
c *=a;printf("Line 4- *=operator example, value of c=%d\n",c);
c /=a;printf("Line 5- /=operator example, value of c=%d\n",c);
c=200;
c %=a;printf("Line 6- %%=operator example, value of c=%d\n",c);
}
