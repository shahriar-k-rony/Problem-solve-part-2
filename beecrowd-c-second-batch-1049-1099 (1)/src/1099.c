#include <stdio.h>
int main(void){
    int n; if(scanf("%d",&n)!=1) return 0;
    while(n--){
        int x,y; if(scanf("%d %d",&x,&y)!=2) return 0;
        if(x>y){ int t=x; x=y; y=t; }
        int s=0;
        for(int i=x+1;i<y;i++) if(i%2) s+=i;
        printf("%d\n", s);
    }
    return 0;
}
