#include "leonard.h"

/**
 * print number integers
 *
 * return numbers
 */

void printnumber(int n)
{
if(n/10!=0)

{
putchar(n%10);
printnumber((n-n%10)/10);
}
 else if((n/10==0) && (n%10!=0) && (n>0))
putchar(n%10);
else if((n/10==0) && (n%10!=0) && (n<=0))
_putchar(-n%10);
}
