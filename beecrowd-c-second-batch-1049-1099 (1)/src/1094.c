#include <stdio.h>
int main(void){
    int n; if(scanf("%d",&n)!=1) return 0;
    int C=0,R=0,S=0,total=0, q; char t;
    for(int i=0;i<n;i++){
        if(scanf("%d %c",&q,&t)!=2) return 0;
        total += q;
        if(t=='C') C+=q;
        else if(t=='R') R+=q;
        else if(t=='S') S+=q;
    }
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", C);
    printf("Total de ratos: %d\n", R);
    printf("Total de sapos: %d\n", S);
    printf("Percentual de coelhos: %.2f %%\n", total? (C*100.0/total):0);
    printf("Percentual de ratos: %.2f %%\n", total? (R*100.0/total):0);
    printf("Percentual de sapos: %.2f %%\n", total? (S*100.0/total):0);
    return 0;
}
