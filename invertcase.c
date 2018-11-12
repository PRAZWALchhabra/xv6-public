#include "types.h"
#include "stat.h"
#include "user.h"

void invertCase(char* str){
    int leng=strlen(str);
    for(int i=0;i<leng;i++){
        if (str[i]<91 && str[i]>=65){
            str[i]+=32;
        }
        else if (str[i]>=97 && str[i]<=122){
            str[i]-=32;
        }
    }
    printf(1,"%s ",str);
}

int main(int argc,char *argv[]){
    for (int i=1;i<argc;i++){
        invertCase(argv[i]);
    }
    printf(1,"\n");
    exit();
}