#include "bits/stdc++.h"

using namespace std;

int main(){
    int size;
    cin>>size;
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cin>>a[i];
    }

    /* ans is final ans and counter tooo. */
    int ans=2;
    /* privious common diff*/
    int pd =a[1]-a[0];
    int curr=2;
    for (int i = 2; i < size; i++)
    {
        if(pd==a[i]-a[i-1]){
            curr++;
        }else{
            pd = a[i]-a[i-1];
            curr=2;
        }
        ans=max(curr,ans);
    }
    
    cout<<ans<<endl;
    
    return 0;
}