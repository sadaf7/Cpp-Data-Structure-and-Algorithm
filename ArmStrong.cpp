#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int number;
    cin>>number;
    int remainder;
    int sum=0;
    int n=number;

    while(number>0){
        remainder=number%10; // 153%10=15   15%10=5 1%10=1
        sum += pow(remainder,3); //3*3*3=27     5*5*5=125 1*1*1=1
        number=number/10; //153/10=15  15/10=1
        //sum=27+125+1
    }
    if(sum==n){
        cout << "ArmStron";
    }
    else{
        cout << "Not ArmStrong";
    }
}
