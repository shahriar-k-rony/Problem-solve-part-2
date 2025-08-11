#include <stdio.h>
int main(void){
    int d; if(scanf("%d",&d)!=1) return 0;
    int codes[] = {61,71,11,21,32,19,27,31};
    const char* names[] = {"Brasilia","Salvador","Sao Paulo","Rio de Janeiro","Juiz de Fora","Campinas","Vitoria","Belo Horizonte"};
    for(int i=0;i<8;i++) if(d==codes[i]){ puts(names[i]); return 0; }
    puts("DDD nao cadastrado");
    return 0;
}
