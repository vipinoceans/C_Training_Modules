#include<stdio.h>

main()

{

int qty = 4;

printf("Address of qty is %u\n",&qty );

printf("value of qty = %d\n", qty);

printf("Value of qty using ptr = %d\n",*(&qty)n );

}
