#include <stdio.h>
int main(void){
    double x,s=0; int c=0;
    for(int i=0;i<6;i++){ if(scanf("%lf",&x)!=1) return 0; if(x>0){ s+=x; c++; } }
    printf("%d valores positivos\n%.1f\n", c, s/c);
    return 0;
}
