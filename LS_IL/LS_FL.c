#include "LS_FL.h"
#include <stdio.h>
#include <stdlib.h>

int Check_LSF_TYPE(char localfile){
    FILE *file;
    char *path = localfile ;
    char buffer[1024];
    file = fopen(path,"r");
    if (file == NULL){return "-0"}

}