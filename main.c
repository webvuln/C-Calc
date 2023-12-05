#include <stdio.h>

int main(){
int option;
printf("(1) addation \n");
printf("(2) subtract\n");
printf("(3) Divison\n");
printf("(4) multiplaction\n");
printf("(5) exit\n");
printf("Select your option: \n"); 
scanf("%d", &option);

switch (option)
{
case 1:
    add();
    break;
case 2:
    sub();
    break;
case 3:
    div();
    break;
case 4:
    multi();
    break;
case 5:
    break;
}
}
 add(){
    int num1;
    int num2;
    printf("first number: ");
    scanf("%d", &num1);

    printf("second number: ");
    scanf("%d", &num2);

    int sum = num1 + num2;
    printf("%d\n", sum);
    main();
}

 sub(){
    int num1;
    int num2;
    printf("first number: ");
    scanf("%d", &num1);

    printf("second number: ");
    scanf("%d", &num2);

    int sum = num1 - num2;
    printf("%d\n", sum);
    main();
}

 multi(){
    int num1;
    int num2;
    printf("first number: ");
    scanf("%d", &num1);

    printf("second number: ");
    scanf("%d", &num2);

    int sum = num1 * num2;
    printf("%d\n", sum);
    main();
}

 div(){
    int num1;
    int num2;
    printf("first number: ");
    scanf("%d", &num1);

    printf("second number: ");
    scanf("%d", &num2);

    int sum = num1 / num2;
    printf("%d\n", sum);
    main();
}