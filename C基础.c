# include<stdio.h>

void max(int a,int b){

    if(a>b){
        printf("%d",a);
    }else
        printf("%d",b);
}

int main(){
    int c,d;
    printf("input two number:\n");
    scanf("%d %d",&c,&d);
    max(c,d);

}
