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

    int x , y;

    static char string[]="UNIX";

    printf("\n");
    
    for(x=0;x<4;x++)
    {
        y = x+1;
    printf("%-4.*s\n",y,string);
    }

    for(x=3;x>=0;x--)
    {
        y=x+1;
    printf("%-4.*s\n",y,string);
    }

}
