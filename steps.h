#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include "interface.h"
#include "currencies.h"

std::string currency1 = "XXX", currency2 = "XXX";
double value = 0, result = 0;
std::string currencies[] = {"USD","COP","EUR","CNY","MXN","BRL","KWD","JPY","CHF","GBP"};

/*
program operation

This is divided into 5 steps:
    1. the first currency is requested
    2. the second currency is requested
    3. the value is requested
    4. print the result
    5. the user is asked if he/she wants to continue or not.
*/

bool firstStep (){
    bool verification = true;
    int contador = 0;

    std::fflush(stdin);

    interfaceMain(value, result, currency1, currency2);

    while (contador != 3){
        contador = 0;

        std::cout<<"\nEnter the type of your currency (CAPITAL LETTER)"<<std::endl;
        std::cout<<"ISO CODE: "; std::getline(std::cin, currency1);

        for (size_t i = 0; i<currency1.length(); i++){
            if (std::isalpha(currency1[i])){
                contador++;
            }
        }

        if (contador > 3 || contador < 3){
            std::cout<<"\nThe ISO code does not have the required length"<<std::endl;
            std::cout<<"Please try again"<<std::endl;
        }
    }

    contador = 0;
    std::transform(currency1.begin(), currency1.end(), currency1.begin(), ::toupper);

    for (int i=0; i<10; i++){
        if (currencies[i] == currency1){
            contador++;
        }
    }

    if (contador == 0){
        std::cout<<"the ISO code entered does not match those shown in the table"<<std::endl;
        std::cout<<"Please try again"<<std::endl;
        verification = false;
    }

    return verification;
}

bool secondStep (){
    bool verification = true;
    int contador = 0;

    std::fflush(stdin);

    interfaceMain(value, result, currency1, currency2);

    while (contador != 3){
        contador = 0;

        std::cout<<"\nEnter the currency in which the value will be converted (CAPITAL LETTERS)"<<std::endl;
        std::cout<<"ISO CODE: "; std::getline(std::cin, currency2);

        for (size_t i = 0; i<currency2.length(); i++){
            if (std::isalpha(currency2[i])){
                contador++;
            }
        }

        if (contador > 3 || contador < 3){
            std::cout<<"\nThe ISO code does not have the required length"<<std::endl;
            std::cout<<"Please try again"<<std::endl;
        }
    }

    contador = 0;
    std::transform(currency2.begin(), currency2.end(), currency2.begin(), ::toupper);

    for (int i=0; i<10; i++){
        if (currencies[i] == currency2){
            contador++;
        }
    }

    if (contador == 0){
        std::cout<<"the ISO code entered does not match those shown in the table"<<std::endl;
        std::cout<<"Please try again"<<std::endl;
        verification = false;
    }

    return verification;
}

void thridStep (){
    std::fflush(stdin);

    interfaceMain(value, result, currency1, currency2);

    std::cout<<"Enter any value: ";
    std::cin>>value;

    result = filter(currency1, currency2, value);
}

void fourthStep (){
    std::fflush(stdin);

    interfaceMain(value, result, currency1, currency2);
}

bool confirmation (){

    bool signal = true;

    char confirmation;
    std::cout<<"would you like to continue? (y/n): "; 
    std::cin>>confirmation;

    if (confirmation == 'y' || confirmation == 'Y'){
        value = 0;
        result = 0;
        currency1 = "XXX";
        currency2 = "XXX";
        signal = true;
    }else{
    signal = false;
    }

    return signal;
}