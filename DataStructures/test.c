//
//  test.c
//  DataStructures
//
//  Created by Albert on 2018/6/11.
//  Copyright © 2018年 hzblossom. All rights reserved.
//

#include "test.h"

void testSort() {
    int i, n;
    int list[MAX_SIZE];
    printf("Enter the number of numbers to generate: ");
    scanf("%d", &n);
    
    if (n < 1 || n > MAX_SIZE) {
        fprintf(stderr, "Improper value of n\n");
        exit(EXIT_FAILURE);
    }
    
    for (i = 0; i < n; i++) {
        list[i] = rand() % 1000;
        printf("%d  ", list[i]);
    }
    
    sort(list, n);
    printf("\nSorted array: \n");
    for (i = 0; i < n; i++) {
        printf("%d  ", list[i]);
    }
    printf("\n");
}



void testMalloc() {
    int i, *pi;
    float f, *pf;
    //    pi = (int *)malloc(sizeof(i));
    //    pf = (float *)malloc(sizeof(f));
    //    if (!pi || !pf) {
    //        fprintf(stderr, "Insufficient memory");
    //        exit(EXIT_FAILURE);
    //    }
    MALLOC(pi, sizeof(i));
    MALLOC(pf, sizeof(f));
    *pi = 1024;
    *pf = 3.14;
    
    printf("an integer = %d, a float = %f\n", *pi, *pf);
    free(pi);
    free(pf);
}
