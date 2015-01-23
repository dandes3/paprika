//
//  main.c
//  Test
//
//  Created by Don Andes on 1/22/15.
//  Copyright (c) 2015 Don Andes. All rights reserved.
//

#include <stdio.h>
//#define REPEAT
//
int main() {
    int i;
    int REPEAT;
    printf("Please enter a number: ");
    scanf("%d", &REPEAT);
    for(i=0; i<REPEAT; i = i+1){
        printf("Hello world\n");
        
    }
    
    
    return 0;
}
