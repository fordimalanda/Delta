#include <stdio.h>
#include "../header/define.h"
#include "../header/header.h"

void presentesaisie(char A , char B , char C , int a , int b , int c){
    printf("Presentation, votre: \n%c = %i \n%c = %i \n%c = %i\n" , A , a , B , b , C , c);
}

void formuledelta(char A , char B , char C , int a , int b , int c , int Delta){
    printf("Delta = %c^2-4%c%c\n" , B , A , C);
    printf("Delta = %i^2 - 4*%i*%i = %i\n" , b , a , c , Delta);
}

void formulex(char X , int A , int B){
    ecrire("X1 = X2\n");
    ecrire("%c = -%i/2%i\n" , X , B , A);
}

void calculex(char X , int a , int b , int x){
    ecrire("%c = -%i/2*%i\n" , X , b , a);
    printf("%c = %i\n" , X , x);
}

void formulex1x2(char A , char B , int Delta , int rcdelta){
    printf("la racine carre de delta (%i) = %i\n" , Delta , rcdelta);
    ecrire("x1 <> x2\n");
    ecrire("x1 <> x2 = -%c +- racinecarre delta / 2%c\n" , B , A);
    ecrire("x1 = -%c + racinecarre delta / 2%c\n" , B , A);
    ecrire("x2 = -%c - racinecarre delta / 2%c\n" , B , A);
}

void calculex1x2(int a , int b , int rcdelta , int x1 , int x2){
    ecrire("x1 = -%i + %i/2 * %i\n" , b , rcdelta , a);
    ecrire("x2 = -%i - %i/2 * %i\n" , b , rcdelta , a);
    ecrire("x1 = %i\n" , x1);
    ecrire("x2 = %i\n" , x2);
    ecrire("S = { %i , %i }" , x1 , x2);
}