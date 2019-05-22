//
//  main.c
//  CProd
//
//  Created by Vipin Kamalasanan on 12/05/19.
//  Copyright © 2019 Vipin Kamalasanan. All rights reserved.
//

#include <stdio.h>

int main()


{
    int res, x, y;
    int mul(int, int);

    printf("Enter two num to be multiplied\n");
    scanf("%d%d",&x,&y);
    res=mul(x,y);

    printf("%d\n",res);

}



int mul(int a, int b)

{

    int c;
    c= a*b;
    return (c);
}
