#include<stdio.h>
int main(){
    int x,y;
    printf("nhap x:");
    scanf("%d",&x);
    printf("nhap y:");
    scanf("%d",&y);
    if(x<200||x>300){
        printf("x ok %d \n",x);
        }
        else{
            printf("x 0 thoa man dk");
        }
    if(y>100&&y<300){
        printf("y ok %d \n",y);
          }
        else{
            printf("y o thoa man");
        }
        return 0;
}