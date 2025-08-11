#include <stdio.h>
#include <math.h>
int is_int(double x){ return fabs(x - (int)(x+0.5)) < 1e-9; }
int main(void){
    for(int step=0; step<=10; step++){
        double I = step/5.0; // 0.0,0.2,...,2.0
        for(int j=1;j<=3;j++){
            double J = I + j;
            if(fabs(I - (int)I) < 1e-9){
                printf("I=%d J=%d\n", (int)I, (int)J);
            }else if(fabs((I*10) - (int)(I*10+0.5)) < 1e-9){
                printf("I=%.1f J=%.1f\n", I, J);
            }else{
                printf("I=%.2f J=%.2f\n", I, J);
            }
        }
    }
    return 0;
}
