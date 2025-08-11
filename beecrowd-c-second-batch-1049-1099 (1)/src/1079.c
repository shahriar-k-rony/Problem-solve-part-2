#include <stdio.h>
int main(void){
    int t; if(scanf("%d",&t)!=1) return 0;
    while(t--){
        double a,b,c; if(scanf("%lf %lf %lf",&a,&b,&c)!=3) return 0;
        double m=(a*2+b*3+c*5)/10.0;
        printf("%.1f\n", m);
    }
    return 0;
}
