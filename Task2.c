#include <stdio.h>
// task 2
// Additional operations ofSquare root ,cube root , raise to the power

int main() {
    float n1 = 0, n2 = 0, SQ = 0, i, n = 0, CR = 0;
    int e = 0, prod = 1, num = 0, org = 0;
    char ch;
    printf("Input a character:\n'M'For multiplication\n'D'For division\n'A'For addition\n'S' For subtraction\n'Q'For square root\n'C'For cube root\n'P'For power:");
    scanf(" %c", &ch);
    switch (ch) {
        case 'M':
            printf("Enter two operands:");
            scanf("%f,%f", &n1, &n2);
            printf("%.2fX%.2f=%.2f", n1, n2, n1 * n2);
            break;
        case 'D':
            printf("Enter two operands:");
            scanf("%f,%f", &n1, &n2);
            printf("%.2f/%.2f=%.2f", n1, n2, n1 / n2);
            break;
        case 'A':
            printf("Enter two operands:");
            scanf("%f,%f", &n1, &n2);
            printf("%.2f+%.2f=%.2f", n1, n2, n1 + n2);
            break;
        case 'S':
            printf("Enter two operands:");
            scanf("%f,%f", &n1, &n2);
            printf("%.2f-%.2f=%.2f", n1, n2, n1 - n2);
            break;
        case 'Q':
            printf("Enter a number:");
            scanf(" %f", &n);
            if (n > 0) {
                for (i = 0.001; SQ <= n; i += 0.001) {
                    SQ = i * i;
                }
                printf("Square root is %.2f", i);
            } else
                printf("Invalid input");

            break;
        case 'C':
            printf("Enter a number:");
            scanf(" %f", &n);
            if (n > 0) {
                for (i = 0.001; CR <= n; i += 0.001) {
                    CR = i * i * i;
                }
                printf("Square root is %.2f", i);
            } else
                printf("Invalid input");
            break;
        case 'P':
            printf("Enter base and exponent");
            scanf("%d,%d", &num, &e);
            org = e;
            if (e > 0) {
                while (e != 0) {
                    prod = prod * num;
                    --e;
                }
                printf("%d^%d=%d", num, org, prod);
            } else
                printf("Invalid input");
            break;
        default: {
            printf("Invalid input");
        }
    }


    return 0;
}
