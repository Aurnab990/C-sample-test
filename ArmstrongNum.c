#include<stdio.h>
#include<math.h>

int main(){
    int num,i,j,temp,sum=0;
    printf("Enter the Number\n");
    scanf("%d",&num);
    temp=num;
    //Using loop
    while(num>0){
            i=num%10;
            sum+=i*i*i;
            num=num/10;
    }
    if(sum==temp){
        printf("The %d number is Armstrong Number.\n",temp);
    }
    else{
        printf("The %d Number is not Armstrong Number.\n",temp);
    }

   return 0;

}

