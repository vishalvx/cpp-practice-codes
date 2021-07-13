#include<iostream>
#include<math.h>

using namespace std;

int fibonnaci(int number){
    int number1=0,number2=1,nextNumber;
    cout<<number1<<" "<<number2<<" ";
    for(int i=2;i<number;i++){
        nextNumber=number1+number2;
        cout<<nextNumber<<" ";
        number1=number2;
        number2=nextNumber;
    }
    return 0;    
}

int main(){
    int number;
    cout<<"Enter number:\n";
    cin>>number;

    cout<<"Fibonnaci"<<number<<" numbers :\n";
    fibonnaci(number);
    
}