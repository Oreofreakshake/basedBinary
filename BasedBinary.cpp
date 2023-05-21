#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

long long int convertToDec(char n1[], int b1){

    int j=strlen(n1)-1, k=0;

    long long int n=0;

    while(j>=0){
        int i=(int)n1[j--];
        if(i>=48&&i<=57){
            i-=48;      //0=48
        }
        else if(i>=65&&i<=90){
            i-=55;      //10=A
        }
        else if(i>=97&&i<=122){
            i-=61;      //36=a
        }
        else if(i==43||i==44){
            i+=19;       //62=+
        }
        n= n + (i*pow(b1,k++));
    }
    return n;
}

void func(long long int n2, int b2){
    if(n2>0){
        func(n2/b2,b2);
        int i= n2%b2;
        if(i>=0&&i<=9){
            i+=48;      //0=48
        }
        else if(i>=10&&i<=35){
            i+=55;      //10=A
        }
        else if(i>=36&&i<=61){
            i+=61;      //36=a
        }
        else if(i=='+'||i=='/'){
            i-=19;       //62=+
        }
        cout << (char)i;
    }
}
void convertToBase(char n1[], int b1, int b2){

    long long int n2 = convertToDec(n1,b1);

    if(n2==0)
        cout << 0;

    func(n2,b2);
}

int main(int i=1){

    if(!i){
        return 0;
    }

    char n1[100];
    int b1, b2;

    cout << "Input string: ";
    cin >> n1;
    cout << "Base: ";
    cin >> b1;
    cout << "Desired base: ";
    cin >> b2;

    cout << "Output: ";
    convertToBase(n1,b1,b2);

    cout << "\n\nEnter 0 to exit, 1 to continue ";
    cin >> i;
    cout << endl;

    main(i);
}
