#include<stdio.h>
int main(){
int a,b,c;


printf("digite o valor de a: ");scanf("%d", &a);
printf("digite o valor de b: ");scanf("%d",&b);
printf("digite o valor de c: ");scanf("%d",&c);

if(a+b>c && a+c>b && b+c >a){

if(a==b&& b==c ){
    printf("seu triangulo e equilatero");
}else if (a == b || a==c || c==b){
    printf("seu triangulo e isosceles");

}else if(a != b && a!=c && c!=b){
    printf("seu triangulo e escaleno");

}else{
    printf("os numeros informados nao formam triangulio");
}
}

return 0;

}