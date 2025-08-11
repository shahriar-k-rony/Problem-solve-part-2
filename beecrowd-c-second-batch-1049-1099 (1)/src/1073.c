#include <stdio.h>
int main(void){
    int n; if(scanf("%d",&n)!=1) return 0;
    for(int i=2;i<=n;i+=2) printf("%d^2 = %d\n", i, i*i);
    return 0;
}
