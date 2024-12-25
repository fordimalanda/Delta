#include <stdio.h>
#include "../header/define.h"
#include "../header/header.h"

int delta(int a , int b , int c , int delta){

    delta = b*b-4*a*c;

    return delta;
}