#include <stdio.h>
int main(void){
    int n,x; if(scanf("%d",&n)!=1) return 0;
    for(int i=0;i<n;i++){
        if(scanf("%d",&x)!=1) return 0;
        if(x==0) puts("NULL");
        else{
            printf("%s %s\n", (x%2==0)?"EVEN":"ODD", (x>0)?"POSITIVE":"NEGATIVE");
        }
    }
    return 0;
}
