#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    system("color e");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int t;
    t=abs(a-c);
    printf("%d 0 0\n",c);
    printf("%d %d 1\n",a,t);
    printf("%d %d 0",b,t+abs(b-a));


    return 0;
}
