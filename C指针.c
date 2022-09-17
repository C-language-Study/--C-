//# include <stdio.h>
//
//
//int main(){
//    char *p = "I like china!";
//    p +=8;
//    printf("%s\n",p);
//    return 0;
//}

//# include <stdio.h>
//int max(int x,int y){
//    return x>y?x:y;
//}
//int main(){
//    int(*p)(int ,int);
//    p = max;
//    int a,b;
//    printf("please enter two number!\n");
//    scanf("%d,%d",&a,&b);
//    printf("max = %d", p(a,b));
//
//}
# include <stdio.h>

int main(){
   int  max(int x,int y);
   int  min(int x,int y);
   int  add(int x,int y);
    int(*p)(int ,int);
    //p = max;
    int a,b,n;
    printf("please enter two number!\n");
    scanf("%d,%d",&a,&b);
    //printf("max = %d\n", p(a,b));
    printf("please select number 1 or 2 or 3\n");
    scanf("%d",&n);
    if(n==1) p = max ;
    else if(n == 2) p = min;
    else if(n == 3) p = add;
    if(n == 1) printf("max = %d\n",p(a,b));
    else if(n == 2) printf("min = %d\n",p(a,b));
    else if(n == 3) printf("add is %d",add);



}
int max(int x,int y){
    return x>y?x:y;
}
int min(int x,int y){
    return x<y?x:y;
}
int add(int x,int y){
    int a = 0,b = 0,c = 0;
    c = a+b;
    printf("%d",c);
}

