#include <stdio.h>
int main(void){
    int x,c=0; for(int i=0;i<5;i++){ if(scanf("%d",&x)!=1) return 0; if(x%2==0) c++; }
    printf("%d valores pares\n", c);
    return 0;
}
