#include <stdio.h>

int main()
{
    float n1, n2;
    char ch;
    printf("Enter First Number:");
    scanf("%f", &n1);
    printf("Enter which operation would you like to do with these two numbers (+ or - or * or /):\n");
    scanf(" %c", &ch); 
    printf("Enter Second Number:\n");
    scanf("%f", &n2);
    switch (ch)
    {
    case '+':
    printf("%.2f + %.2f = %.2f\n", n1, n2, n1 + n2);
    break;
    case '-':
    printf("%.2f - %.2f = %.2f\n", n1, n2, n1 - n2);
    break;
    case '*':
    printf("%.2f * %.2f = %.2f\n", n1, n2, n1 * n2);
    break;
    case '/':
if (n2 == 0)
		{
           printf("Division by zero is not allowed.\n");
        } else {
            printf("%.2f / %.2f = %.2f\n", n1, n2, n1 / n2);
        }
        break;
    default:
        printf("Given operator is undefined!\n");
    }
    return 0;
}

