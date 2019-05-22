#include<stdio.h>
#include<string.h>
#include<math.h>

main()
{


    int factorial, n;
    int fact(int n);


    printf("Enter a no to find factorial\n");
    scanf("%d",&n);

    factorial=fact(n);
    printf("Factorial of %d is : %d\n",n,factorial);

}

int fact( int f)
{

    int fact =1 , i;

    for(i=f; i>=1; i--)
        fact = fact*i;
        return (fact);

}
