#include<stdio.h>
  //Formula for temperature converter.
float FahrenheitToCelcius(float t){
    return ((t-32) * (5.0/9.0));
}
float FahrenheitToKelvin(float t){
    return ((t-32) * (5.0/9.0)+273.15);
}
float CelsiusToFahrenheit(float t){
    return ((t*9/5) + 32);
}
float CelsiusToKelvin(float t){
    return (t + 273.15);
}
float KelvinToCelsius(float t){
    return (t - 273.15);
}
float KelvinToFahrenheit(float t){
       return ((t - 273.15) * 9/5 + 32);
}
  //Formula for Currency converter.
float USDtoBDT(float c){
    return (c * 94.94);
}
float USDtoEuro(float c){
    return (c * 0.83);
}
float USDtoJPY(float c){
    return (c * 138.75);
}
float USDtoRMB(float c){
    return (c * 6.89);
}
 //Formula for Mass converter.
float ounceToPound(float m){
    return (m * 0.0625);
}
float gramToPound(float m){
    return (m * 0.00220462);
}
float milligramToPound(float m){
    return (m * 0.0000022046);
}

int main(){

    int category, tempChoice, currencyChoice, currency, massChoice;
    float value, result;
    int i = 0;
    while(i = 1){
    printf("- - - - - - - - Welcome to Unit Converter! - - - - - - - - \n"
    "- - - Here is a list of conversation to choose from: - - -\n"
    "Enter 1 for Temperature Conversion.\n"
    "Enter 2 for Currency Conversion.\n"
    "Enter 3 for Mass Conversion.\n"
    "Enter 4 for Exit.\n"
    "Please enter the given number that you wanted to convert : ");
    scanf("%d",&category);
    printf("\n\n");
        switch(category){
            case 1:
                printf(" - - -  Welcome to Temperature Converter! - - - \n"
                "Here is a list of conversations to choose from: \n"
                "Enter 1 for Fahrenheit To Celsius. \n"
                "Enter 2 for Fahrenheit To Kelvin. \n"
                "Enter 3 for Celsius To Fahrenheit. \n"
                "Enter 4 for Celsius To Kelvin. \n"
                "Enter 5 for Kelvin To Celsius. \n"
                "Enter 6 for Kelvin To Fahrenheit. \n"
                "Enter 7 for Exit.\n"
                "Please enter the given number that you wanted to convert : ");
                scanf("%d",&tempChoice);
                printf("\n\n");
                    switch(tempChoice)
                    {
                        case 1:
                            printf("Type a value of Fahrenheit : ");
                            scanf("%f",&value);
                            printf("\n");
                            result = FahrenheitToCelcius(value);
                            printf("Celaius : %.2fc",result);
                            printf("\n\n");
                            break;
                        case 2:
                            printf("Type a value of Fahrenheit : ");
                            scanf("%f",&value);
                            printf("\n");
                            result = FahrenheitToKelvin(value);
                            printf("Kelvin : %.2fk",result);
                            printf("\n\n");
                            break;
                        case 3:
                            printf("Type a value of Celsius : ");
                            scanf("%f",&value);
                            printf("\n");
                            result = CelsiusToFahrenheit(value);
                            printf("Fahrenheit : %.1ff",result);
                            printf("\n\n");
                            break;
                        case 4:
                            printf("Type a value of Celsius : ");
                            scanf("%f",&value);
                            printf("\n");
                            result = CelsiusToKelvin(value);
                            printf("Kelvin : %.2fk",result);
                            printf("\n\n");
                            break;
                        case 5:
                            printf("Type a value of Kelvin : ");
                            scanf("%f",&value);
                            printf("\n");
                            result = KelvinToCelsius(value);
                            printf("Celaius : %.2fc",result);
                            printf("\n\n");
                            break;
                        case 6:
                            printf("Type a value of Kelvin : ");
                            scanf("%f",&value);
                            printf("\n");
                            result = KelvinToFahrenheit(value);
                            printf("Fahrenheit : %.2fk",result);
                            printf("\n\n");
                            break;
                        case 7:
                            exit(0);
                            break;
                    }
                break;
            case 2:
                printf(" - - - Welcome to Currency Converter! - - -\n"
                "Here is a list of conversations to choose from: \n"
                "Enter 1 for USD to BDT. \n"
                "Enter 2 for USD to Euro. \n"
                "Enter 3 for USD to JPY. \n"
                "Enter 4 for USD to RMB. \n"
                "Enter 5 for Exit.\n"
                "Please enter the given number that you wanted to convert : ");
                scanf("%d",&currencyChoice);
                printf("\n\n");
                    switch(currencyChoice)
                    {
                        case 1:
                            printf("Please enter the USD amount: ");
                            scanf("%d",&currency);
                            printf("\n");
                            result = USDtoBDT(currency);
                            printf("BDT : %.2f",result);
                            printf("\n\n");
                            break;
                        case 2:
                            printf("Please enter the USD amount: ");
                            scanf("%d",&currency);
                            printf("\n");
                            result = USDtoEuro(currency);
                            printf("Euro : %.2f",result);
                            printf("\n\n");
                            break;
                        case 3:
                            printf("Please enter the USD amount: ");
                            scanf("%d",&currency);
                            printf("\n");
                            result = USDtoJPY(currency);
                            printf("JPY : %.2f",result);
                            printf("\n\n");
                            break;
                        case 4:
                            printf("Please enter the USD amount: ");
                            scanf("%d",&currency);
                            printf("\n");
                            result = USDtoRMB(currency);
                            printf("RMB : %.2f",result);
                            printf("\n\n");
                            break;
                        case 5:
                            exit(0);
                            break;
                    }
                    //Here you can add more currency for future upgrade....
                break;
            case 3:
                printf(" - - - Welcome to Mass Converter! - - -\n"
                "Here is a list of conversations to choose from: \n"
                "Enter 1 for ounces to pounds. \n"
                "Enter 2 for gram to pounds. \n"
                "Enter 3 for milligram to pounds. \n"
                "Enter 4 for Exit.\n"
                "Please enter the given number that you wanted to convert : ");
                scanf("%d",&massChoice);
                printf("\n\n");
                    switch(massChoice)
                    {
                        case 1:
                            printf("Please enter the ounce amount: \n");
                            scanf("%f",&value);
                            printf("\n");
                            result = ounceToPound(value);
                            printf(" %.2f Pounds",result);
                            printf("\n\n");
                            break;
                        case 2:
                            printf("Please enter the gram amount: \n");
                            scanf("%f",&value);
                            printf("\n");
                            result = gramToPound(value);
                            printf(" %f Pounds",result);
                            printf("\n\n");
                            break;
                        case 3:
                            printf("Please enter the gram amount: \n");
                            scanf("%f",&value);
                            printf("\n");
                            result = milligramToPound(value);
                            printf(" %f Pounds",result);
                            printf("\n\n");
                            break;
                        case 4:
                            exit(0);
                            break;
                        //Here you can add more mass for future upgrade....
                    }
                break;
            case 4:
                exit(0);
                break;
        }
        }
    return 0;
}
