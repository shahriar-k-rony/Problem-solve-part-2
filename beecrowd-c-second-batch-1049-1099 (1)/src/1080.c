#include <stdio.h>
int main(void){
    int x, idx=1, pos=1, maxv=-2147483648;
    for(int i=1;i<=100;i++){
        if(scanf("%d",&x)!=1) return 0;
        if(i==1 || x>maxv){ maxv=x; pos=i; }
    }
    printf("%d\n%d\n", maxv, pos);
    return 0;
}
