#import <Foundation/Foundation.h>
#import <Cocoa/Cocoa.h>

#include <stdio.h>


void cfunction() {
    printf("%s\n", "calling a pure C function...");
    printf("%s\n", "make sure your C code is inside of a header file!!!");
}
