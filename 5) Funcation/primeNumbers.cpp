#include<iostream>
#include<math.h>

using namespace std;

bool isPrime(int number){
    for(int i=2;i<=sqrt(number);i++){
        if(number%i==0) return false;
    }
    return true;
}

int main(){
    int number;
    cout<<"Enter number:\n";
    cin>>number;

    cout<<"Prime numbers between 1-"<<number<<" :\n";
    for(int i=2;i<=number;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
}