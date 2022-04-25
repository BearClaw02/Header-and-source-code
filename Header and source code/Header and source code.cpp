// Matthew Nispel 04-24-2022//
// calls the header file//
#include "Header.h"



int main()
{
    // delcanres a var for user input//
    int uin;
    // prints out the title of the game//
    cout << "Welcome to Winter Storm Survial" << endl;
    // asks the user to pick a number//
    cout << "Pick 1 to play or antother to quit" << endl;
    // calls the user input//
    cin >> uin;
    //calls the function path1//
    path1(uin);
}
