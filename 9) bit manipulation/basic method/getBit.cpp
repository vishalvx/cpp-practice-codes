// here we are finding at  x index which bit is present

#include "bits/stdc++.h"

using namespace std;


int getBit(int n,int x){
    return (n & 1<<x)!=0;
}
int main()
{
    int n, x;
    cin >> n >> x;

    cout<<getBit(n, x)<<endl;
    return 0;
}