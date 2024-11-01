#include <stdio.h>
int main()
{
    int n;
    float tem,res;
    printf("To convert from Celsius to Fahrenheit enter 1\n");
    printf("To convert from Fahrenheit to Celsius enter 2\n");
    printf("To convert from Celsius to Kelvin enter 3\n");
    printf("To convert from Kelvin to Celsius enter 4\n");
    printf("To convert from Kelvin to Fahrenheit enter 5\n");
    printf("To convert from Fahrenheit to Kelvin enter 6\n");
    printf("\nEnter your choice (1-6): ");
    scanf("%d",&n);
    if(n>0&&n<7)
    {
        printf("Enter the temperature: ");
        scanf("%f",&tem);
    }
    else
    {
        printf("Invalid conversion");
        return 0;
    }
    switch(n)
    {
        case 1:
            {
                res=(9.0/5.0*tem)+32.0;
                break;
            }
        case 2:
            {
                res=(tem-32.0)*5.0/9.0;
                break;
            }
        case 3:
            {
                res=tem+273.15;
                break;
            }
        case 4:
            {
                res=tem-273.15;
                break;
            }
        case 5:
            {
                res=((tem-273.15)*(9.0/5.0))+32.0;
                break;
            }
        case 6:
            {
                res=((tem-32.0)*(5.0/9.0))+273.15;
                break;
            }
    }
    printf("The converted temperature: %.2f",res);

    return 0;
}