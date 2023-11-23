#include <iostream>
#include <string>

/*
    operations to convert currencies

in this program the following logic was used:
- the first ISO entered was taken as the main currency.
- the ISO axis went through a filter that led to a function specific to each currency.
- in each function there was another filter with all the currencies except the one of the function.
- in the function of each currency was operated according to the second currency entered, and then the result was returned to the main one.
- the main function returned the value to be put on the screen.

    CURRENCY / ISO CODE

    united states dollar    USD
    Colombian peso          COP
    euro                    EUR
    Chinese yuan            CNY               
    Mexican peso            MXN
    Brazilian real          BRL
    Kuwaiti Dinar           KWD
    Japanese yen            JPY
    Swiss franc             CHF
    British Pound           GBP
*/

double USD(double value, std::string ISO_code){
    double resultUSD = 0;

    if (ISO_code == "COP"){
        resultUSD = value * 4068.00;
    }else if(ISO_code == "EUR"){
        resultUSD = value * 0.92;
    }else if(ISO_code == "CNY"){
        resultUSD = value * 7.17;
    }else if(ISO_code == "MXN"){
        resultUSD = value * 17.19;
    }else if(ISO_code == "BRL"){
        resultUSD = value * 490;
    }else if(ISO_code == "KWD"){
        resultUSD = value * 0.31;
    }else if(ISO_code == "JPY"){
        resultUSD = value * 149.60;
    }else if(ISO_code == "CHF"){
        resultUSD = value * 0.88;
    }else if(ISO_code == "GBP"){
        resultUSD = value * 0.80;
    }else{
        std::cout<<"no se ingreso un valor valido"<<std::endl;
    }

    return resultUSD;
}

double COP(double value, std::string ISO_code){
    double resultCOP = 0;

    if (ISO_code == "USD"){
        resultCOP = value * 0.00025;
    }else if(ISO_code == "EUR"){
        resultCOP = value * 0.00023;
    }else if(ISO_code == "CNY"){
        resultCOP = value * 0.0018;
    }else if(ISO_code == "MXN"){
        resultCOP = value * 0.0042;
    }else if(ISO_code == "BRL"){
        resultCOP = value * 0.0012;
    }else if(ISO_code == "KWD"){
        resultCOP = value * 0.000076;
    }else if(ISO_code == "JPY"){
        resultCOP = value * 0.037;
    }else if(ISO_code == "CHF"){
        resultCOP = value * 0.00022;
    }else if(ISO_code == "GBP"){
        resultCOP = value * 0.00020;
    }else{
        std::cout<<"no se ingreso un valor valido"<<std::endl;
    }

    return resultCOP;
}

double EUR(double value, std::string ISO_code){
    double resultEUR = 0;

    if (ISO_code == "USD"){
        resultEUR = value * 1.09;
    }else if(ISO_code == "COP"){
        resultEUR = value * 4429.85;
    }else if(ISO_code == "CNY"){
        resultEUR = value * 7.80;
    }else if(ISO_code == "MXN"){
        resultEUR = value * 18.73;
    }else if(ISO_code == "BRL"){
        resultEUR = value * 5.34;
    }else if(ISO_code == "KWD"){
        resultEUR = value * 0.34;
    }else if(ISO_code == "JPY"){
        resultEUR = value * 162.64;
    }else if(ISO_code == "CHF"){
        resultEUR = value * 0.96;
    }else if(ISO_code == "GBP"){
        resultEUR = value * 0.87;
    }else{
        std::cout<<"no se ingreso un valor valido"<<std::endl;
    }

    return resultEUR;
}

double CNY(double value, std::string ISO_code){
    double resultCNY = 0;

    if (ISO_code == "USD"){
        resultCNY = value * 0.14;
    }else if(ISO_code == "COP"){
        resultCNY = value * 567.96;
    }else if(ISO_code == "EUR"){
        resultCNY = value * 0.13;
    }else if(ISO_code == "MXN"){
        resultCNY = value * 2.40;
    }else if(ISO_code == "BRL"){
        resultCNY = value * 0.69;
    }else if(ISO_code == "KWD"){
        resultCNY = value * 0.043;
    }else if(ISO_code == "JPY"){
        resultCNY = value * 20.85;
    }else if(ISO_code == "CHF"){
        resultCNY = value * 0.12;
    }else if(ISO_code == "GBP"){
        resultCNY = value * 0.11;
    }else{
        std::cout<<"no se ingreso un valor valido"<<std::endl;
    }

    return resultCNY;
}

double MXN(double value, std::string ISO_code){
    double resultMXN = 0;

    if (ISO_code == "USD"){
        resultMXN = value * 0.058;
    }else if(ISO_code == "COP"){
        resultMXN = value * 236.48;
    }else if(ISO_code == "EUR"){
        resultMXN = value * 0.053;
    }else if(ISO_code == "CNY"){
        resultMXN = value * 0.42;
    }else if(ISO_code == "BRL"){
        resultMXN = value * 0.29;
    }else if(ISO_code == "KWD"){
        resultMXN = value * 0.018;
    }else if(ISO_code == "JPY"){
        resultMXN = value * 8.68;
    }else if(ISO_code == "CHF"){
        resultMXN = value * 0.051;
    }else if(ISO_code == "GBP"){
        resultMXN = value * 0.047;
    }else{
        std::cout<<"no se ingreso un valor valido"<<std::endl;
    }

    return resultMXN;
}

double BRL(double value, std::string ISO_code){
    double resultBRL = 0;

    if (ISO_code == "USD"){
        resultBRL = value * 0.20;
    }else if(ISO_code == "COP"){
        resultBRL = value * 829.00;
    }else if(ISO_code == "EUR"){
        resultBRL = value * 0.19;
    }else if(ISO_code == "CNY"){
        resultBRL = value * 1.46;
    }else if(ISO_code == "MXN"){
        resultBRL = value * 3.51;
    }else if(ISO_code == "KWD"){
        resultBRL = value * 0.063;
    }else if(ISO_code == "JPY"){
        resultBRL = value * 30.45;
    }else if(ISO_code == "CHF"){
        resultBRL = value * 0.18;
    }else if(ISO_code == "GBP"){
        resultBRL = value * 0.16;
    }else{
        std::cout<<"no se ingreso un valor valido"<<std::endl;
    }

    return resultBRL;
}

double KWD(double value, std::string ISO_code){
    double resultKWD = 0;

    if (ISO_code == "USD"){
        resultKWD = value * 3.24;
    }else if(ISO_code == "COP"){
        resultKWD = value * 13298.50;
    }else if(ISO_code == "EUR"){
        resultKWD = value * 2.98;
    }else if(ISO_code == "CNY"){
        resultKWD = value * 23.23;
    }else if(ISO_code == "MXN"){
        resultKWD = value * 55.81;
    }else if(ISO_code == "BRL"){
        resultKWD = value * 15.92;
    }else if(ISO_code == "JPY"){
        resultKWD = value * 484.74;
    }else if(ISO_code == "CHF"){
        resultKWD = value * 2.87;
    }else if(ISO_code == "GBP"){
        resultKWD = value * 2.60;
    }else{
        std::cout<<"no se ingreso un valor valido"<<std::endl;
    }

    return resultKWD;
}

double JPY(double value, std::string ISO_code){
    double resultJPY = 0;

    if (ISO_code == "USD"){
        resultJPY = value * 0.0067;
    }else if(ISO_code == "COP"){
        resultJPY = value * 27.24;
    }else if(ISO_code == "EUR"){
        resultJPY = value * 0.0061;
    }else if(ISO_code == "CNY"){
        resultJPY = value * 0.048;
    }else if(ISO_code == "MXN"){
        resultJPY = value * 0.12;
    }else if(ISO_code == "BRL"){
        resultJPY = value * 0.033;
    }else if(ISO_code == "KWD"){
        resultJPY = value * 0.0021;
    }else if(ISO_code == "CHF"){
        resultJPY = value * 0.0059;
    }else if(ISO_code == "GBP"){
        resultJPY = value * 0.0054;
    }else{
        std::cout<<"no se ingreso un valor valido"<<std::endl;
    }

    return resultJPY;
}

double CHF(double value, std::string ISO_code){
    double resultCHF = 0;

    if (ISO_code == "USD"){
        resultCHF = value * 1.13;
    }else if(ISO_code == "COP"){
        resultCHF = value * 4603.40;
    }else if(ISO_code == "EUR"){
        resultCHF = value * 1.04;
    }else if(ISO_code == "CNY"){
        resultCHF = value * 8.10;
    }else if(ISO_code == "MXN"){
        resultCHF = value * 19.40;
    }else if(ISO_code == "BRL"){
        resultCHF = value * 5.55;
    }else if(ISO_code == "KWD"){
        resultCHF = value * 0.35;
    }else if(ISO_code == "JPY"){
        resultCHF = value * 168.90;
    }else if(ISO_code == "GBP"){
        resultCHF = value * 0.91;
    }else{
        std::cout<<"no se ingreso un valor valido"<<std::endl;
    }

    return resultCHF;
}

double GBP(double value, std::string ISO_code){
    double resultGBP = 0;

    // operate according to the second currency entered
    if (ISO_code == "USD"){
        resultGBP = value * 1.25;
    }else if(ISO_code == "COP"){
        resultGBP = value * 5081.87;
    }else if(ISO_code == "EUR"){
        resultGBP = value * 1.15;
    }else if(ISO_code == "CNY"){
        resultGBP = value * 8.94;
    }else if(ISO_code == "MXN"){
        resultGBP = value * 21.48;
    }else if(ISO_code == "BRL"){
        resultGBP = value * 6.13;
    }else if(ISO_code == "KWD"){
        resultGBP = value * 0.39;
    }else if(ISO_code == "JPY"){
        resultGBP = value * 186.51;
    }else if(ISO_code == "CHF"){
        resultGBP = value * 1.10;
    }else{
        std::cout<<"no se ingreso un valor valido"<<std::endl;
    }

    return resultGBP;
}
// funcion main
double filter (std::string ISO1, std::string ISO2, double value){
    double resultCurrency = 0;

    // call the corresponding function for that currency
    if (ISO1 == "USD"){
        resultCurrency = USD(value, ISO2);
    }else if (ISO1 == "COP"){
        resultCurrency = COP(value, ISO2);
    }else if(ISO1 == "EUR"){
        resultCurrency = EUR(value, ISO2);
    }else if(ISO1 == "CNY"){
        resultCurrency = CNY(value, ISO2);
    }else if(ISO1 == "MXN"){
        resultCurrency = MXN(value, ISO2);
    }else if(ISO1 == "BRL"){
        resultCurrency = BRL(value, ISO2);
    }else if(ISO1 == "KWD"){
        resultCurrency = KWD(value, ISO2);
    }else if(ISO1 == "JPY"){
        resultCurrency = JPY(value, ISO2);
    }else if(ISO1 == "CHF"){
        resultCurrency = CHF(value, ISO2);
    }else if(ISO1 == "GBP"){
        resultCurrency = GBP(value, ISO2);
    }else{
        std::cout<<"no se ingreso un valor valido"<<std::endl;
    }
    return resultCurrency;
}