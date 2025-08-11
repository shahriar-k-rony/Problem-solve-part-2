#include <stdio.h>
int main(void){
    int m; if(scanf("%d",&m)!=1) return 0;
    const char* names[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    puts(names[m-1]);
    return 0;
}
