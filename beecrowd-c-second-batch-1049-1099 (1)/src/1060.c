#include <stdio.h>
int main(void){
    double x; int c=0;
    for(int i=0;i<6;i++){ if(scanf("%lf",&x)!=1) return 0; if(x>0) c++; }
    printf("%d valores positivos\n", c);
    return 0;
}
