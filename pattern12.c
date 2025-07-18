#include<Stdio.h>
#include<conio.h>
int main(){
int n=3;
int a=n*(n+1)/2;
for( int i=1;i<=n;i++){
   for(int k=1;k<=i;k++){
   printf("%3d",a--);
   }
   printf("\n");
}

}