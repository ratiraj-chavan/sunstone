#include<stdio.h>
#include<math.h>
void sum();
void diff();
void product();
void div();
int op,n,m;
int main(){
    printf("----Calculator----\n");
    do{ printf("enter opertaion to be performed(1-5)\n");
      printf(" 1 for addition\n 2 for subtraction\n 3 for multiplication \n 4 for division\n 5 for exiting\n");
      scanf("%d",&op);
      if (op == 1) {
            sum();
        } else if (op == 2) {
            diff();
        } else if (op == 3) {
            product();
        } else if (op == 4) {
            div();
        } else if (op == 5) {
            printf("Exiting the calculator\n");
            break;  // Exit the loop when `op` is 5
        } else {
            printf("Invalid operation selection\n");
    }}while (op!=5);
 return 0;   
}
    void sum(){
      printf("enter first number\n");
    scanf("%d",&n);
    printf("enter second number\n");
    scanf("%d",&m);
    printf("sum of %d and %d = %d\n",n,m,n+m);
    }
    void diff(){
    printf("enter first number\n");
    scanf("%d",&n);
    printf("enter second number\n");
    scanf("%d",&m);
   printf("subtraction of %d and %d = %d \n",n,m,n-m);
    }
    void product(){
    printf("enter first number\n");
    scanf("%d",&n);
    printf("enter second number\n");
    scanf("%d",&m);
    printf("product of %d and %d =%d\n",n,m,n*m);
    }
    void div(){
    printf("enter first number\n");
    scanf("%d",&n);
    printf("enter second number\n");
    scanf("%d",&m);
    printf("divison of %d and %d =%d\n",n,m, n / m);
    }