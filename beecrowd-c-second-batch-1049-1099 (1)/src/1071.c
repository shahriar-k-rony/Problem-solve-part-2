#include <stdio.h>
int main(void){
    int x,y,s=0; if(scanf("%d%d",&x,&y)!=2) return 0;
    if(x>y){ int t=x; x=y; y=t; }
    for(int i=x+1;i<y;i++) if(i%2) s+=i;
    printf("%d\n", s);
    return 0;
}
