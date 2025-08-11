#include <stdio.h>
int main(void){
    int n; if(scanf("%d",&n)!=1) return 0;
    for(int i=1;i<=n;i+=2) printf("%d\n", i);
    return 0;
}
