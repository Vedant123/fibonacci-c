/**********************************************************
*  main.c                                                 *
*  fibonacci-c                                            *
*                                                         *
*  Created by Vedant Mathur on 7/23/15.                   *
*  Copyright (c) 2015 Vedant Mathur. All rights reserved. *
**********************************************************/

//include statements
#include <stdio.h>

//recursive function to generate a given fibonacci number
long getFibonacci(int sequenceIndex);

int main(int argc, const char * argv[]) {
    int sequenceMax;
    sequenceMax = 0;
    
    while(sequenceMax != -1)
    {
        printf("Enter the fibonacci number you wish to obtain: ");
    
        scanf("%d", &sequenceMax);
        
        if(sequenceMax != -1)
        {
            printf("The %d%s element of the fibonacci sequence is %ld\n\n", sequenceMax, (sequenceMax == 1)? "st": (sequenceMax == 2)? "nd": (sequenceMax == 3)? "rd": "th", getFibonacci(sequenceMax));
        }
    }
    
    return 0;
}

long getFibonacci(int sequenceIndex)
{
    //default case, which contains two initial values
    if(sequenceIndex < 3)
    {
        return 1;
    }
    else
    {
        return getFibonacci(sequenceIndex - 1) + getFibonacci(sequenceIndex - 2);
    }
}