#include <stdio.h>

double calculateFahToCel(double fah){
    //Function for calculate Fahrenheit to Celcius
    double cel;
    cel = (fah-32)/1.8;
    return cel;

}

double calculateCelToFah(double cel){
    //Function for calculate Celcius to Fahrenheit
    double fah;
    fah = (cel*1.8)+32;
    return fah;


}

int main(){

    int checkTheChoice;
    //greeting part
    printf("WELCOME TO TEMPERATURE CALCULATOR!!!");
    printf("\n***********************************");

    UserCheckInput:
    //user input for the which service user want to use
        printf("\nIf you want to calculate fahrenheit to celcius write '1'");
        printf("\nIf you want to calculate celcius to fahrenheit write '2'");
        printf("\nIf you want to exit press write '3'");
        printf("\nEnter here->>>> ");
        scanf("%d",&checkTheChoice);



    // If user entered undefined number
    if(checkTheChoice != 1 && checkTheChoice != 2 && checkTheChoice !=3){
        printf("You entered undefined number please try again!");
        goto UserCheckInput;

    }



    //user input for the degree value
    double value;
    if(checkTheChoice == 1 || checkTheChoice == 2){
    printf("\nWhat is your degree value");
    printf("\nEnter here ->>>>");
    scanf("%lf",&value);}

    double answer;

    //if user wants to fah to cel condition
    if(checkTheChoice == 1){
        answer =calculateFahToCel(value);
        printf("\nConversion is completed the answer is ->>>> %lf",answer);
    }

    //if user wants to cel to fah condition
    if(checkTheChoice == 2){
        answer = calculateCelToFah(value);
        printf("\nConversion is completed the answer is ->>> %lf",answer);
    }




    //Goodbye to user
    printf("\nThank you for using our service!");
    printf("\n Goodbye :)");





    return 0;
}