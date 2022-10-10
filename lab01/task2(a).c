#include<stdio.h>
void add(double n3, double n2);
void sub(double n1, double n2);
void mul(double n3, double n2);

int main(){
    double n1,n2,n3;
    char opprator;
    double result;
    scanf("%lf  %lf %lf",&n1,&n2,&n3);
    if (n1>n2){
        sub(n1,n2);
    }
    if (n3<n2){
        add(n3,n2);
    }
    if(n2==n3){
        mul(n3,n2);
    }

    return 0;
}
void add(double n3, double n2){
	double result= n3+n2;
	printf("The result is:%lf",result);

    }
void sub(double n1,double n2){
    double result= n1-n2;
	printf("The result is:%lf",result);
}
void mul(double n3, double n2){
    double result=n3*n2;
    printf("The result is:%lf",result);
}

