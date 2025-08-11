#include <stdio.h>
int main(void){
    int x, even=0, odd=0, pos=0, neg=0;
    for(int i=0;i<5;i++){
        if(scanf("%d",&x)!=1) return 0;
        if(x%2==0) even++; else odd++;
        if(x>0) pos++; else if(x<0) neg++;
    }
    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);
    return 0;
}
