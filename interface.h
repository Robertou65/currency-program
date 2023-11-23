#include <iostream>
#include <iomanip>
#include <string>

/*
    program interface

    this program has a rectangular interface, and in it is the following order:

    1. program name
    2. screen
        in this there are two numbers, the one on the left is the value that will be asked to the user and the one on the right is the result.
    3. table with the available currencies
        in this table only the ISO codes of the currencies will be shown, but then a table with the names will be presented.
*/

void ISO_CODES_LINE_ONE (std::string ISO1, std::string ISO2){
    // if the ISO's in the same line are selected, regardless of the order
    if (ISO1 == "USD" && ISO2 == "COP"){
        std::cout<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"///"<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"///"<<"|"<<std::endl;
    }else if (ISO1 == "COP" && ISO2 == "USD"){
        std::cout<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"///"<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"///"<<"|"<<std::endl;
    }
    // if the ISO "USD" is selected at the start
    else if (ISO1 == "USD"){
        std::cout<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"///"<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"COP"<<"|"<<std::endl;
    }else if(ISO2 == "COP"){
        std::cout<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"USD"<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"///"<<"|"<<std::endl;
    }
    // if the ISO "COP" is selected at the start
    else if (ISO1 == "COP"){
        std::cout<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"USD"<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"///"<<"|"<<std::endl;
    }else if(ISO2 == "USD"){
        std::cout<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"///"<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"COP"<<"|"<<std::endl;
    }
    // if any ISO are not selected
    else{
        std::cout<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"USD"<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"COP"<<"|"<<std::endl;
    }
}


void ISO_CODES_LINE_TWO(std::string ISO1, std::string ISO2){
    // if the ISO's in the same line are selected, regardless of the order
    if(ISO1 == "EUR" && ISO2 == "CNY"){
        std::cout<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"///"<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"///"<<"|"<<std::endl;
    }else if (ISO1 == "CNY" && ISO2 == "EUR"){
        std::cout<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"///"<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"///"<<"|"<<std::endl;
    }
    // if the ISO "EUR" is selected at the start
    else if (ISO1 == "EUR"){
        std::cout<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"///"<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"CNY"<<"|"<<std::endl;
    }else if (ISO2 == "CNY"){
        std::cout<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"EUR"<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"///"<<"|"<<std::endl;
    }
    // if the ISO "CNY" is selected at the start
    else if(ISO1 == "CNY"){
        std::cout<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"EUR"<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"///"<<"|"<<std::endl;
    }else if(ISO2 == "EUR"){
        std::cout<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"///"<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"CNY"<<"|"<<std::endl;
    }
    // if any ISO are not selected
    else{
        std::cout<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"EUR"<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"CNY"<<"|"<<std::endl;
    }
}

void ISO_CODES_LINE_THREE(std::string ISO1, std::string ISO2){
    // if the ISO's in the same line are selected, regardless of the order
    if(ISO1 == "MXN" && ISO2 == "BRL"){
        std::cout<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"///"<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"///"<<"|"<<std::endl;
    }else if (ISO1 == "BRL" && ISO2 == "MXN"){
        std::cout<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"///"<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"///"<<"|"<<std::endl;
    }
    // if the ISO "EUR" is selected at the start
    else if (ISO1 == "MXN"){
        std::cout<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"///"<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"BRL"<<"|"<<std::endl;
    }else if (ISO2 == "BRL"){
        std::cout<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"MXN"<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"///"<<"|"<<std::endl;
    }
    // if the ISO "CNY" is selected at the start
    else if(ISO1 == "BRL"){
        std::cout<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"MXN"<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"///"<<"|"<<std::endl;
    }else if(ISO2 == "MXN"){
        std::cout<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"///"<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"BRL"<<"|"<<std::endl;
    }
    // if any ISO are not selected
    else{
        std::cout<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"MXN"<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"BRL"<<"|"<<std::endl;
    }
}

void ISO_CODES_LINE_FOUR(std::string ISO1, std::string ISO2){
    // if the ISO's in the same line are selected, regardless of the order
    if(ISO1 == "KWD" && ISO2 == "JPY"){
        std::cout<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"///"<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"///"<<"|"<<std::endl;
    }else if (ISO1 == "JPY" && ISO2 == "KWD"){
        std::cout<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"///"<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"///"<<"|"<<std::endl;
    }
    // if the ISO "EUR" is selected at the start
    else if (ISO1 == "KWD"){
        std::cout<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"///"<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"JPY"<<"|"<<std::endl;
    }else if (ISO2 == "JPY"){
        std::cout<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"KWD"<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"///"<<"|"<<std::endl;
    }
    // if the ISO "CNY" is selected at the start
    else if(ISO1 == "JPY"){
        std::cout<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"KWD"<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"///"<<"|"<<std::endl;
    }else if(ISO2 == "KWD"){
        std::cout<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"///"<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"JPY"<<"|"<<std::endl;
    }
    // if any ISO are not selected
    else{
        std::cout<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"KWD"<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"JPY"<<"|"<<std::endl;
    }
}

void ISO_CODES_LINE_FIVE(std::string ISO1, std::string ISO2){
    // if the ISO's in the same line are selected, regardless of the order
    if(ISO1 == "CHF" && ISO2 == "GBP"){
        std::cout<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"///"<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"///"<<"|"<<std::endl;
    }else if (ISO1 == "GBP" && ISO2 == "CHF"){
        std::cout<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"///"<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"///"<<"|"<<std::endl;
    }
    // if the ISO "EUR" is selected at the start
    else if (ISO1 == "CHF"){
        std::cout<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"///"<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"GBP"<<"|"<<std::endl;
    }else if (ISO2 == "CBP"){
        std::cout<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"CHF"<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"///"<<"|"<<std::endl;
    }
    // if the ISO "CNY" is selected at the start
    else if(ISO1 == "GBP"){
        std::cout<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"CHF"<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"///"<<"|"<<std::endl;
    }else if(ISO2 == "CHF"){
        std::cout<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"///"<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"GBP"<<"|"<<std::endl;
    }
    // if any ISO are not selected
    else{
        std::cout<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"CHF"<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<"GBP"<<"|"<<std::endl;
    }
}

void interfaceMain (double value, double result, std::string ISO1, std::string ISO2){
    std::string space = " ";

    std::cout<<"-----------------------------"<<std::endl;
    std::cout<<"|    currency converter     |"<<std::endl;
    std::cout<<"-----------------------------"<<std::endl;
    std::cout<<"|"<<std::setw(27)<<std::left<<space<<"|"<<std::endl;
    std::cout<<"|"<<std::setw(27)<<std::left<<value<<"|"<<std::endl;
    std::cout<<"|"<<std::setw(27)<<std::right<<result<<"|"<<std::endl;
    std::cout<<"|"<<std::setw(27)<<std::left<<space<<"|"<<std::endl;
    std::cout<<"-----------------------------"<<std::endl;
    std::cout<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<ISO1<<std::setw(6)<<std::left<<"|"<<std::setw(8)<<std::left<<ISO2<<"|"<<std::endl;
    std::cout<<"-----------------------------"<<std::endl;
    std::cout<<"-----------------------------"<<std::endl;
    std::cout<<std::setw(13)<<std::left<<"|"<<std::setw(15)<<std::left<<"ISO"<<"|"<<std::endl;
    std::cout<<"-----------------------------"<<std::endl;
    ISO_CODES_LINE_ONE(ISO1, ISO2);
    std::cout<<"-----------------------------"<<std::endl;
    ISO_CODES_LINE_TWO(ISO1, ISO2);
    std::cout<<"-----------------------------"<<std::endl;
    ISO_CODES_LINE_THREE(ISO1, ISO2);
    std::cout<<"-----------------------------"<<std::endl;
    ISO_CODES_LINE_FOUR(ISO1, ISO2);
    std::cout<<"-----------------------------"<<std::endl;
    ISO_CODES_LINE_FIVE(ISO1, ISO2);
    std::cout<<"-----------------------------"<<std::endl;

}