# currency-program--linux-
a program that operates up to 10 currencies

program operation

This is divided into 5 steps:
    1. the first currency is requested
    2. the second currency is requested
    3. the value is requested
    4. print the result
    5. the user is asked if he/she wants to continue or not.
    
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

program interface

    this program has a rectangular interface, and in it is the following order:

    1. program name
    2. screen
        in this there are two numbers, the one on the left is the value that will be asked to the user and the one on the right is the result.
    3. table with the available currencies
        in this table only the ISO codes of the currencies will be shown, but then a table with the names will be presented.
