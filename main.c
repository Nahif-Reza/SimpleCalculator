#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>

float a, b, c;
int option;

void welcome_page();
float take_input();
void add(float, float);
void sub(float, float);
void mult(float, float);
void divs(float, float);
void exponent(float);
void square_root(float);
void factorial(float);
void display_result(float);

float take_input()
{   
    printf("Please Enter a number --->> ");
    float x;
    scanf("%f", &x);
    return x;
}

void display_result(float r)
{   int q = (int) r;

    if(q == r)
    {
        printf("%d\n\n", q);
    }
    else
    {
        printf("%.2f\n\n", r);
    }
    
}



void add(float x, float y)
{
    float result = x + y;
    printf("Your addition result is: ");
    display_result(result);
}

void sub(float x, float y)
{
    float result = x - y;
    printf("Your subtraction result is: ");
    display_result(result);

}

void mult(float x, float y)
{
    float result = x * y;
    printf("Your multiplication result is: ");
    display_result(result);
}

void divs(float x, float y)
{
    float result = x / y;
    printf("Your division result is: ");
    display_result(result);
}


void exponent(float x)
{
    float result, e;
    printf("Enter the power your want to raise your number to: ");
    scanf("%f", &e);
    result = pow(x, e);
    display_result(result);
}

void factorial(float x)
{   
    int q = (int) x;
    int result = 1;
    for(int i = 1;i <= q;i++)
    {
        result *= i;
    }
    display_result(result);
}

void square_root(float x)
{   
    double result = sqrt((double) x);
    printf("Square Root is: %.1lf\n", result);
}

void welcome_page()
{   
    printf("Please press the appropriate keys to do the operations\n\n");
    printf("Press 1 for Addition of Two Numbers.\n");
    printf("Press 2 for Subtraction of Two Numbers.\n");
    printf("Press 3 for Multiplication of Two Numbers.\n");
    printf("Press 4 for Division of Two Numbers.\n");
    printf("Press 5 for Exponent of One Number.\n");
    printf("Press 6 for Factorial of One Number.\n");
    printf("Press 7 for Square Root of One Number.\n");
    printf("Press 8 to exit the calculator.\n\n");
    printf("Enter your key here---->> ");
    scanf("%d", &option);

    switch(option)
    {   
        case 1:
            a = take_input();
            b = take_input();
            add(a, b);
            break;
        case 2:
            a = take_input();
            b = take_input();
            sub(a, b);
            break;
        case 3:
            a = take_input();
            b = take_input();
            mult(a, b);
            break;
        case 4:
            a = take_input();
            b = take_input();
            divs(a, b);
            break;
        case 5:
            a = take_input();
            exponent(a);
            break;
        case 6:
            printf("To avoid overflowing please do not input over 20. Thank You.\n");
            printf("Please enter an integer.\n");
            a = take_input();
            factorial(a);
            break;
        case 7:
            a = take_input();
            square_root(a);
            break;
        case 8:
            printf("Exiting the calculator.\nThank You for using it!!\n");
            exit(0);
        default:
            printf("Please enter a valid option. Thank You.\n");
    }
}

void main()
{   
    printf("\t\t\t\tWelcome to Rifat's Calculator.\n\n\n");
    while(1)
    {
        welcome_page();
    }
    
}