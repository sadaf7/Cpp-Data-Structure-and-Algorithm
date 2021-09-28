#include<iostream>
using namespace std;
int main()
{
    int number,remainder,revNumber=0;
    cin >>number;
    while(number>0){
        remainder=number%10;
        number=number/10;
        revNumber=(revNumber*10)+remainder;
    }
    cout << "Reverse Number: " << revNumber;
}
