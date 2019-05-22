#include<stdio.h>
main()
{

int qty = 7;

int *ptr;

ptr = &qty;

printf("Address of qty is %u\n", &qty);

printf("Address of ptr is %u\n", &ptr);

printf(" Value of ptr is %u\n", ptr);

printf("Value of qty is %d\n",*(&qty) );


printf("value of qty is %d\n",*ptr );
}
