#include<stdio.h>
#define VAL(x,y) x+y
int main()
{
    printf("%d\n",VAL(10,11));      //OUTPUT: ->10+11   It substitute the value first and then evaluates
    printf("%d\n",2*VAL(10,11));   //OUTPUT: ->2*10+11  It substitute the value first and then evaluates
}