/*
Write a program in C to accept date(int),month(int),year( int ranging from 1961-2030) where you need to accept a fullname and gender(char array) and create a horoscope 
*/

#include <stdio.h>
#include <stdbool.h>

int main(){
    int date, month, year;
    printf("Enter date,month,year : ");
    scanf("%d %d %d", &date, &month, &year);
    char name[80];
    printf("Enter your name: ");
    scanf("%s", &name);
    char gender;
    printf("Enter your gender: ");
    scanf(" %c", &gender);
    if (year < 1961 || year > 2030){
        printf("Year not in range");
        return 0;
    }
    if (date<1 || date>31){
        printf("Invalid date");
    }
    if (month<1 || month>12){
        printf("Invalid month");
    }
    printf("Your star sign is: ");
    if (month == 1){
        if (date >= 1 && date <= 19)
            printf("Capricon");
        else if (date >= 20 && date <= 31)
            printf("Aquarius");
    }
    if (month == 2){
        if (date >= 1 && date <= 17)
                printf("Aquarius");
        else{
            if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)){
                if (date >= 18 && date <= 29)
                    printf("Pisces");
                else
                    printf("Invalid date");
            }
            else{
                if (date >= 18 && date <= 28)
                    printf("Pisces");
                else
                    printf("Invalid date");
            }
        }
    }
    if (month == 3){
        if (date >= 1 && date <= 19)
            printf("Pisces");
        else if (date >= 20 && date <= 31)
            printf("Aries");
        else
            printf("Invalid date");
    }
    if (month == 4){
        if (date >= 1 && date <= 19)
            printf("Aries");
        else if (date >= 20 && date <= 30)
            printf("Taurus");
        else
            printf("Invalid date");
    }
    if (month == 5){
        if (date >= 1 && date <= 20)
            printf("Taurus");
        else if (date >= 21 && date <= 31)
            printf("Gemini");
        else
            printf("Invalid date");
    }
    if (month == 6){
        if (date >= 1 && date <= 20)
            printf("Gemini");
        else if (date >= 21 && date <= 30)
            printf("Cancer");
        else
            printf("Invalid date");
    }
    if (month == 7){
        if (date >= 1 && date <= 22)
            printf("Cancer");
        else if (date >= 23 && date <= 31)
            printf("Leo");
    }
    if (month == 8){
        if (date >= 1 && date <= 22)
            printf("Leo");
        else if (date >= 23 && date <= 31)
            printf("Virgo");
    }
    if (month == 9){
        if (date >= 1 && date <= 22)
            printf("Virgo");
        else if (date >= 23 && date <= 30)
            printf("Libra");
    }
    if (month == 10){
        if (date >= 1 && date <= 22)
            printf("Libra");
        else if (date >= 23 && date <= 31)
            printf("Scorpio");
    }
    if (month == 11){
        if (date >= 1 && date <= 21)
            printf("Scorpio");
        else if (date >= 22 && date <= 30)
            printf("Saggitarius");
    }
    if (month == 12){
        if (date >= 1 && date <= 21)
            printf("Saggitarius");
        else if (date >= 22 && date <= 31)
            printf("Capricon");
    }
}