#include<stdio.h>
#include<conio.h>
int main(){
int nr=10;
for(int i=nr;i>=1;i--){
for(int k=1;k<=i;k++){
printf("%3d",k);
}
printf("\n");
}
}