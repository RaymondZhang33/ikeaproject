/* 
* Names: Nathan O'Brien and Raymond Zhang
* Program Name: IKEA Project
* Date: 9/26/24
* Extra: We used setprecision to format decimal values for the subtotal and total, and we used colors via ASCII to make it look more appealing.

Prices: 
Standing Desks:
- Small ($139.99)
- Medium ($369.99)
- Large ($799.99)
Blackout Curtains:
- 53" ($24.99)
- 50" ($21.99)
- 47" ($19.99)
- 45" ($17.99)
Tabletops:
- Wooden ($69.99)
- Marble ($159.99)
- Granite ($79.99)
Table Legs:
- Blue ($19.99)
- Pink ($25.99)
- Gray ($16.99)
*/


#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

/* define variables */
double subTotal = 0;
int numOfItems = 0;
/* const makes sure it can not be changed */
const double tax = 0.06625;
double currentItemPrice;
double itemCnt;

int main()
{
    cout << "\e[1;34mWelcome to \e[1;33mIKEA\e[1;34m! We are located in Denville, New Jersey. We thank you for shopping with us today!\e[0m\n" << endl;
    /* runs until user goes to bill */
    while (true) {
        int choice;
        /* prints choices, and gets user input */
        cout << "Please enter the item you want to buy's corresponding number." << endl;
        cout << "\e[1;33m1. \e[1;34mStanding Desk\n\e[1;34m2. \e[1;33mBlackout Curtains\n\e[1;33m3. \e[1;34mTabletops\n\e[1;34m4. \e[1;33mTable Legs\n\e[0mEnter 0 to Checkout." << endl;
        
        cout << "Please enter which number to buy. > ";
        cin >> choice;
        /* checks to see if it falls in the item choices */
        if (choice >= 1 && choice <= 4){
            int itemChoice;
            /* prints choices and gets input for each item */
            
            /* Standing Desks*/
            if (choice == 1){
                cout << "You chose \e[1;34mStanding Desks\e[0m. Please enter the size you want:\n\e[1;33m1. \e[1;34mSmall - \e[1;32m$139.99\n\e[1;34m2. \e[1;33mMedium - \e[1;32m$369.99\n\e[1;33m3. \e[1;34mLarge - \e[1;32m$799.99\n\e[0mEnter your choice > ";
                cin >> itemChoice;
                if (itemChoice == 1){
                    cout << "\nSmall Standing Desk added to cart." << endl;
                    currentItemPrice = 139.99;
                } else if (itemChoice == 2){
                    cout << "\nMedium Standing Desk added to cart." << endl;
                    currentItemPrice = 369.99;  
                } else if (itemChoice == 3){
                    cout << "\nLarge Standing Desk added to cart." << endl;
                    currentItemPrice = 799.99;
                } else {
                    cout << "Incorrect input." << endl;
                    continue; /* Goes back to the top of the loop */
                }
            /* Blackout Curtains */
            } else if (choice == 2){
                cout << "You chose \e[1;33mBlackout Curtains\e[0m. Please enter the size (length in inches) you want: \n\e[1;33m1. \e[1;34m53 - \e[1;32m$24.99 \n\e[1;34m2. \e[1;33m50 - \e[1;32m$21.99 \n\e[1;33m3.\e[1;34m 47 - \e[1;32m$19.99 \n\e[1;34m4. \e[1;33m45 - \e[1;32m$17.99\n\e[0mEnter your choice > ";
                cin >> itemChoice;
                if (itemChoice == 1){
                    cout << "\n53 inch Blackout Curtain added to cart." << endl;
                    currentItemPrice = 24.99;
                } else if (itemChoice == 2){
                    cout << "\n50 inch Blackout Curtain added to cart." << endl;
                    currentItemPrice = 21.99;  
                } else if (itemChoice == 3){
                    cout << "\n47 inch Blackout Curtain added to cart." << endl;
                    currentItemPrice = 19.99;
                } else if (itemChoice == 4){
                    cout << "\n45 inch Blackout Curtain added to cart." << endl;
                    currentItemPrice = 17.99;
                } else {
                    cout << "Incorrect input." << endl;
                    continue;
                }
                /* Tabletops */
            } else if (choice == 3){
                cout << "You chose \e[1;34mTabletops\e[0m. Please enter the material you want:\n\e[1;33m1. \e[1;34mWood - \e[1;32m$69.99\n\e[1;34m2. \e[1;33mMarble - \e[1;32m$159.99\n\e[1;33m3. \e[1;34mGranite - \e[1;32m$79.99\n\e[0mEnter your choice > ";
                cin >> itemChoice;
                if (itemChoice == 1){
                    cout << "\nWooden Tabletop added to cart." << endl;
                    currentItemPrice = 69.99;
                } else if (itemChoice == 2){
                    cout << "\nMarble Tabletop added to cart." << endl;
                    currentItemPrice = 159.99;
                } else if (itemChoice == 3){
                    cout << "\nGranite Tabletop added to cart." << endl;
                    currentItemPrice = 79.99;
                } else {
                   cout << "Incorrect input." << endl;
                   continue;
                }
                /* Table Legs */
            } else if (choice == 4){
                cout << "You chose \e[1;33mTable Legs\e[0m. Please enter the color you want: \n\e[1;33m1. \e[1;34mBlue - \e[1;32m$19.99 \n\e[1;34m2. \e[1;33mPink - \e[1;32m$25.99 \n\e[1;33m3. \e[1;34mGray - \e[1;32m$16.99 \n\e[0mEnter your choice > ";
                cin >> itemChoice;
                if (itemChoice == 1){
                    cout << "\n\e[1;34mBlue\e[0m Table Legs added to cart." << endl;
                    currentItemPrice = 19.99;
                } else if (itemChoice == 2){
                    cout << "\n\e[38;5;212mPink\e[0m Table Legs added to cart." << endl;
                    currentItemPrice = 25.99;  
                } else if (itemChoice == 3){
                    cout << "\n\e[38;5;252mGray\e[0m Table Legs added to cart." << endl;
                    currentItemPrice = 16.99;
                } else {
                    cout << "Incorrect input." << endl;
                    continue;
                }
            } 
            
            /* gets quantity user wants */
            cout << "How many of the item do you want? > ";
            cin >> itemCnt;
            /* adds price to subtotal, and number of items to numOfItems*/
            subTotal += currentItemPrice * itemCnt;
            numOfItems += itemCnt;
        /* Prints final bill */
        } else if (choice == 0){
            /* Extra: */
            cout << "\e[1;34m\nBill\n--------------------\nNumber of Items: " << numOfItems << endl;
            cout << "Subtotal: \033[32m$" << fixed << setprecision(2) << subTotal << endl; /* Rounds subtotal to the hundredths place. */
            cout << "\033[34mSales Tax: " << fixed << setprecision(3) << tax * 100 << "%" << endl;
            cout << "Total: \033[32m$" << fixed << setprecision(2) << subTotal * (1 + tax) /* Makes the subtotal one plus the salex tax and multiplies that value to the subtotal to get total. */ << endl;
            cout <<  "\033[34m--------------------\nThank you for visiting the Denville \033[33mIkea!" << endl;
            break; /* Ends while loop. */
        /* if user enters incorrect input, restarts */
        } else {
            cout << "Incorrect input. Please try again." << endl;
            continue;
        }
    }
    
    return 0;
}