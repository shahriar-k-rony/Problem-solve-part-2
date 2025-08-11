#include <stdio.h>
int main(void){
    int d1,h1,m1,s1,d2,h2,m2,s2;
    if(scanf("Dia %d", &d1)!=1) return 0;
    if(scanf("%d : %d : %d", &h1,&m1,&s1)!=3) return 0;
    if(scanf(" Dia %d", &d2)!=1) return 0;
    if(scanf("%d : %d : %d", &h2,&m2,&s2)!=3) return 0;
    long t1 = ((long)d1*24*3600) + h1*3600 + m1*60 + s1;
    long t2 = ((long)d2*24*3600) + h2*3600 + m2*60 + s2;
    long dt = t2 - t1;
    int days = dt / (24*3600); dt %= 24*3600;
    int hours = dt / 3600; dt %= 3600;
    int mins = dt / 60; int secs = dt % 60;
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", days, hours, mins, secs);
    return 0;
}
