/*
 * =====================================================================================
 *
 *       Filename:  variand.c
 *
 *    Description: Implementation of va_list datatype
 *
 *        Version:  1.0
 *        Created:  Saturday 31 December 2011 01:31:18  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Rajeev N B<coder.rshetty@gmail.com>
 *        Company:  RVCE
 *
 * =====================================================================================
 */

#include<stdio.h>
#include<stdarg.h>
void someDemoArgs(int mt,...)
{
    va_list var;  // Data type of the variable arguments
    int i;

    va_start(var,mt);  //va_start(va_list variable,last argument in the function)
    for (i = mt;i>=0; i = va_arg(var,int))  //va_arg(va_list varibale,data type of the next argument)   returns the next argument
    {
    printf("%d\n",i);
    }
     va_end(var);
     putchar('\n');

}

int main(void)
{
someDemoArgs(10,20,30,40,69,-1); // Sentinal Value -1 is a must as a last argument
return 0;
}
