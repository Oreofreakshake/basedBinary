#include<iostream>
#include <cctype>
#include <cstring>

using namespace std;

void BaseTenToTwo(int NumYouEnter){
    
    string bin{};
    
    while( NumYouEnter > 0 ) {
        if( NumYouEnter % 2 == 0 ) bin.insert( bin.begin( ), '0' );
        else bin.insert( bin.begin( ), '1' );
        
        NumYouEnter >>= 1;
    }
    
    cout << "binary value = " << bin << "\n";
}


void BaseSixteenToTwo(int NumYouEnter){
    
    string bin{};
    
    while( NumYouEnter > 0 ) {
        if( NumYouEnter % 16 == 0 ) bin.insert( bin.begin( ), '0' );
        else bin.insert( bin.begin( ), '1' );
        
        NumYouEnter >>= 1;
    }
    
    cout << "binary value = " << bin << "\n";
}



void BaseEightToTwo(int NumYouEnter){
    
    string bin{};
    
    while( NumYouEnter > 0 ) {
        if( NumYouEnter % 8 == 0 ) bin.insert( bin.begin( ), '0' );
        else bin.insert( bin.begin( ), '1' );
        
        NumYouEnter >>= 1;
    }
    
    cout << "binary value = " << bin << "\n";
}

// Main function
int main(){
    bool run = true;
    string choice,continuechoice;
    int inputedvalue, count=0;

    while(run){
        cout << "What base do you want to convert?\n choices: \n 'hex' | 'dec' | 'oct'\n";
        cin >> choice;

        // Decimal to Binary
        if(choice == "dec"){

            cout << "Enter the Decimal value you want to convert: ";
            cin >> inputedvalue;
            BaseTenToTwo(inputedvalue);

            //asking if you want to retry or not
            cout << "Do you want to continue? | 'yes' or 'no' |\n\n";
            cin >> continuechoice;

            if(continuechoice == "yes"){
                count++;
            }
            else if(continuechoice == "no"){
                cout << "\nGoodbye";
                run = false;
            }
            else{
                cout << "\nInvalid choice, Ill end the program";
                run = false;
            }

        }

        // Decimal to Hexadecimal
        if(choice == "hex"){
            
            cout << "Enter the Hexadecimal value you want to convert: ";
            cin >> inputedvalue;
            BaseSixteenToTwo(inputedvalue);

            //asking if you want to retry or not
            cout << "Do you want to continue? | 'yes' or 'no' |\n\n";
            cin >> continuechoice;

            if(continuechoice == "yes"){
                count++;
            }
            else if(continuechoice == "no"){
                cout << "\nGoodbye";
                run = false;
            }
            else{
                cout << "\nInvalid choice, Ill end the program";
                run = false;
            }

        }

        // Decimal to Octal
        if(choice == "oct"){
            
            cout << "Enter the Octal value you want to convert: ";
            cin >> inputedvalue;
            BaseEightToTwo(inputedvalue);

            //asking if you want to retry or not
            cout << "Do you want to continue? | 'yes' or 'no' |\n\n";
            cin >> continuechoice;

            if(continuechoice == "yes"){
                count++;
            }
            else if(continuechoice == "no"){
                cout << "\nGoodbye";
                run = false;
            }
            else{
                cout << "\nInvalid choice, Ill end the program";
                run = false;
            }

        }


    }



}
