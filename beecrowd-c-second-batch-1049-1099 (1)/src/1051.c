#include <stdio.h>
int main(void){
    double s; if(scanf("%lf",&s)!=1) return 0;
    if(s<=2000.0){ puts("Isento"); return 0; }
    double tax=0;
    if(s>4500.0){ tax += (s-4500.0)*0.28; s=4500.0; }
    if(s>3000.0){ tax += (s-3000.0)*0.18; s=3000.0; }
    if(s>2000.0){ tax += (s-2000.0)*0.08; }
    printf("R$ %.2f\n", tax);
    return 0;
}
