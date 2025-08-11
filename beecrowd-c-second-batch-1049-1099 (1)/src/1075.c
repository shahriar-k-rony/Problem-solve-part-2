#include <stdio.h>
int main(void){
    int n; if(scanf("%d",&n)!=1) return 0;
    for(int i=1;i<10000;i++) if(i%n==2) printf("%d\n", i);
    return 0;
}
