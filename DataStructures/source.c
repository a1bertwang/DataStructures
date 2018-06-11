//
//  source.c
//  DataStructures
//
//  Created by Albert on 2018/6/11.
//  Copyright © 2018年 hzblossom. All rights reserved.
//

#include "source.h"

void sort(int list[], int n) {
    int i, j, min, temp;
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (list[j] < list[min]) {
                min = j;
            }
        }
        SWAP(list[i], list[min], temp);
    }
}

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
