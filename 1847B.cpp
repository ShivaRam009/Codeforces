#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        if(n==1){
            cout<<"1"<<endl;
            continue;
        }
        int and1=a[0];
        int c=0;
        for(int i=0;i<n;i++){
            and1=and1&a[i];
            if(and1==0){
                c++;
                if(i+1<n) and1=a[i+1];
            }
        }
        if(c==0) cout<<"1"<<endl;
        else cout<<c<<endl;
        
    }
}

/*11 22 33 44
AND of all 4 numbers will always be less than the sum of xor of groups of numbers.
AND(11 , 22, 33, 44) < AND(11 22)+AND(33, 44)
so construct groups if we have AND of group is zero , if we dont have such groups then simply give 1 because of derived rule.*/