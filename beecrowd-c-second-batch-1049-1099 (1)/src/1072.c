#include <stdio.h>
int main(void){
    int n,x,in=0,out=0; if(scanf("%d",&n)!=1) return 0;
    for(int i=0;i<n;i++){ if(scanf("%d",&x)!=1) return 0; if(x>=10 && x<=20) in++; else out++; }
    printf("%d in\n%d out\n", in, out);
    return 0;
}
