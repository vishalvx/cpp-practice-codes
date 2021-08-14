/*
Challenge : August Long Challenge
Problem 3 : Chef and Bulb Invention

This code give TLE :(
*/



#include "bits/stdc++.h"

using namespace std;

int main()
{
    
    int t;
    cin>>t;
    while (t--)
    {
        int N,K,p,gas=0,rem=0;
        cin>>N>>p>>K;
        int day=1;
        while(gas!=p)
        {
            if(gas>N-1){
                rem++;
                gas=rem;
                continue;
            }
            day++;
            gas+=K;
        }
        cout<<day<<endl;
    }
    
    return 0;
}