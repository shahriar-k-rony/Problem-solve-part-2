#include <stdio.h>
int main(void){
    for(int I=1; I<=9; I+=2){
        int J = I + 6;
        for(int k=0;k<3;k++,J--){
            printf("I=%d J=%d\n", I, J);
        }
    }
    return 0;
}
