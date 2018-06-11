//
//  source.h
//  DataStructures
//
//  Created by Albert on 2018/6/11.
//  Copyright © 2018年 hzblossom. All rights reserved.
//

#ifndef source_h
#define source_h

#include <stdio.h>
#include <stdlib.h>

#endif /* source_h */

#define COMPARE(x, y) (((x) < (y) ? -1 : ((x) == (y)) ? 0 : 1))

#define MAX_SIZE 101

#define SWAP(x, y, t) ((t) = (x), (x) = (y), (y) = (t))

#define MALLOC(p, s) \
if (!((p) = malloc(s))) { \
fprintf(stderr, "Insufficient memory");\
exit(EXIT_FAILURE);\
}

void sort(int [], int);
void swap(int*, int*);
