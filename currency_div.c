#include<stdio.h>
int main(){
    int curr,i,r,cha[6]={500,200,100,50,10,1},n[6]={0,0,0,0,0,0};
    printf("Enter the currency you want to convert: ");
    scanf("%d",&curr);
    r=curr;
    if(r>500){
        r=r%500;
        n[0]=curr/500;
    }
    if(r>200){
    n[1]=r/200;
    r=r%200;
    }
     if(r>100){
    n[2]=r/100;
    r=r%100;
    }
     if(r>50){
    n[3]=r/50;
    r=r%50;
    }
     if(r>10){
    n[4]=r/10;
    r=r%10;
    }
     if(r>1){
        n[5]=r/1;
    }
    printf("%d*%d + %d*%d + %d*%d + %d*%d + %d*%d + %d*%d = %d",cha[0],n[0],cha[1],n[1],cha[2],n[2],cha[3],n[3],cha[4],n[4],cha[5],n[5],curr);
    return 0;
}