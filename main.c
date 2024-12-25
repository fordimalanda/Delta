#include <stdio.h>
#include <math.h>
#include "header/header.h"
#include "header/define.h"

void main(void){
    const char A = 'a';
    const char B = 'b';
    const char C = 'c';
    const char X = 'x';
    int a , b , c;
    int x , x1 , x2;
    int Delta , rcdelta;

    a = Val_a(a , A);
    if ( a == 0){
        a0(A);
        fin_du_program();
    }
    else{
        b = Val_b(b , B);
        c = Val_c(c , C);
        presentesaisie(A , B , C , a , b , c);

        Delta = delta(a , b , c , Delta);

        formuledelta(A , B , C , a , b , c , Delta);

        if (Delta < 0){
            negativite();
            fin_du_program();
        }
        else if(Delta == 0){
            formulex(X , A , B);
            x = -b/2*a;
            calculex(X , a , b , x);
        }
        else{
            rcdelta = sqrt(Delta);
            formulex1x2(A , B , Delta , rcdelta);
            
            x1 = (-b+rcdelta)/2*a;
            x2 = (-b-rcdelta)/2*a;

            calculex1x2( a , b , rcdelta , x1 , x2);
        }
    }
}