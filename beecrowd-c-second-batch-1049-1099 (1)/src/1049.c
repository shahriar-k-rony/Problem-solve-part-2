#include <stdio.h>
#include <string.h>
int main(void){
    char a[20], b[20], c[20];
    if(scanf("%19s %19s %19s", a, b, c)!=3) return 0;
    if(!strcmp(a,"vertebrado")){
        if(!strcmp(b,"ave")){
            if(!strcmp(c,"carnivoro")) puts("aguia");
            else puts("pomba");
        } else {
            if(!strcmp(c,"onivoro")) puts("homem");
            else puts("vaca");
        }
    } else {
        if(!strcmp(b,"inseto")){
            if(!strcmp(c,"hematofago")) puts("pulga");
            else puts("lagarta");
        } else {
            if(!strcmp(c,"hematofago")) puts("sanguessuga");
            else puts("minhoca");
        }
    }
    return 0;
}
