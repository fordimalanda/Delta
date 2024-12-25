#include <stdio.h>
#include "../header/define.h"
#include "../header/header.h"

int Val_a(int first , char nameA){
    ecrire("Donnez la valeur de %c : " , nameA);
    lire("%i" , &first);

    retourne first;
}

int Val_b(int second , char nameB){
    ecrire("Donnez la valeur de %c : " , nameB);
    lire("%i" , &second);

    retourne second;
}

int Val_c(int third , char nameC){
    ecrire("Donnez la valeur de %c : " , nameC);
    lire("%i" , &third);

    retourne third;
}
