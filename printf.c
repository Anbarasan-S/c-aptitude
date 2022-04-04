#include<stdio.h>
#define VAL(x,y) x+y
int main()
{
    char num[]="hello";
    int val=printf("%s",num);  //It prints the number of characters it prints in a line  output:hello
    printf("%d",val);   //output:5
}