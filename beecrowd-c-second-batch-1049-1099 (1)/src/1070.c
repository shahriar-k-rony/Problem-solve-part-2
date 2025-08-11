#include <stdio.h>
int main(void){
    int n; if(scanf("%d",&n)!=1) return 0;
    int c=0; while(c<6){ if(n%2!=0){ printf("%d\n", n); c++; } n++; }
    return 0;
}
