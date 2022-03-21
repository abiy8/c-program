#include<stdio.h>
void main(){
const int height=100;/*int const*/
const float number=3.14;/*real const*/
const char letter='A';/* char const*/
const char letter_sequence[10]="ABC";/*string constant*/
const char backslash_char='\?';/*special char const*/

printf("value of height:%d\n",height);
printf("value of number:%f\n",number);
printf("value of letter:%c\n",letter);
printf("value of letter_sequence:%s\n",letter_sequence);
printf("value of backslash_char:%c\n",backslash_char);
}
