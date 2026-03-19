#include <stdio.h>

int main()
{
    int num1, num2;
    char op; 

    scanf("%d %d %c", &num1, &num2, &op);

    switch (op)
    {
        case '+':
            printf("%d\n", num1 + num2);
            break;
        case '-':
            printf("%d\n", num1 - num2);
            break;
        case '*':
            printf("%d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%d\n", num1 / num2);
            } else {
                printf("0으로 나눌 수 없습니다.\n");
            }
            break;
        default:
            printf("잘못된 연산자입니다.\n");
            break;
    }

    return 0;
}
