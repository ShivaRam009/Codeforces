#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       ll n, s=0;
       cin>>n;
       vector<ll>a(n);
       for(ll &it:a){
           cin>>it;
           s+=it;
       }
       
       ll ans=0;
       if((2 * s) % n) { 
           ans=0;
       }
       else{
           ll req=(2*s)/n;  
          
           map<ll,ll>um;
           
           for(ll &it:a){
               if(it<=req ) ans+=um[req-it];
               um[it]++;
           }
       }
       cout<<ans<<endl;
    
        
    }
}


/*2 * (s / n)
When you write 2 * (s / n), the division s / n is performed first, and the result is an integer. This intermediate result may lose precision because any remainder is discarded. Then, the result is multiplied by 2.

Example:

Suppose s = 7 and n = 4.
s / n = 7 / 4 = 1 (because the fractional part is discarded).
2 * (s / n) = 2 * 1 = 2.
This is incorrect if you were expecting a result that considers the fractional part of the division.

(2 * s) / n
When you write (2 * s) / n, the multiplication 2 * s is performed first, which maintains precision. Then, the result is divided by n.

Example:

Suppose s = 7 and n = 4.
2 * s = 2 * 7 = 14.
14 / 4 = 3 (because the fractional part is discarded).
This correctly reflects the intended arithmetic operation.

Why (2 * s) / n is Correct
In the context of the problem, the correct approach is (2 * s) / n because:

Maintains Precision: Multiplying s by 2 first and then dividing by n ensures that you don't lose the fractional part before the division.
Mathematically Accurate: It correctly represents the intended arithmetic for calculating twice the mean as an integer.


So without giving s/n as int we are giving it (2*s)/n*/