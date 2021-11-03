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
    
    cout << "\nbinary value = " << bin << "\n";
}


void BaseSixteenToTwo(char NumYouEnter[10]){
	
    int i=0;

    cout<<"\nbinary Value = ";
    while(NumYouEnter[i])
    {
        switch(NumYouEnter[i])
        {
            case '0':
                cout<<"0000";
                break;
            case '1':
                cout<<"0001";
                break;
            case '2':
                cout<<"0010";
                break;
            case '3':
                cout<<"0011";
                break;
            case '4':
                cout<<"0100";
                break;
            case '5':
                cout<<"0101";
                break;
            case '6':
                cout<<"0110";
                break;
            case '7':
                cout<<"0111";
                break;
            case '8':
                cout<<"1000";
                break;
            case '9':
                cout<<"1001";
                break;
            case 'A':
            case 'a':
                cout<<"1010";
                break;
            case 'B':
            case 'b':
                cout<<"1011";
                break;
            case 'C':
            case 'c':
                cout<<"1100";
                break;
            case 'D':
            case 'd':
                cout<<"1101";
                break;
            case 'E':
            case 'e':
                cout<<"1110";
                break;
            case 'F':
            case 'f':
                cout<<"1111";
                break;
            default:
                cout<<"--Invalid Hex Digit ("<<NumYouEnter[i]<<")--";
        }
        i++;
    }
    cout<<endl;
}

void BaseEightToTwo(int NumYouEnter){
    
    string bin{};
    
    while( NumYouEnter > 0 && NumYouEnter < 8) {
        if( NumYouEnter % 10 == 0 ) bin.insert( bin.begin( ), '0' );
        else bin.insert( bin.begin( ), '1' );
        
        NumYouEnter >>= 1;
    }
    
    cout << "\nbinary value = " << bin << "\n";
}

// Main function
int main(){
    bool run = true;
    string choice,continuechoice;
    int inputedvalue, count=0;
	char inputedvaluehex[10];

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

        // Hexadecimal to Binary
        if(choice == "hex"){
            
            cout << "Enter the Hexadecimal value you want to convert: ";
            cin >> inputedvaluehex;
            BaseSixteenToTwo(inputedvaluehex);

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

        // Octal to Binary
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
