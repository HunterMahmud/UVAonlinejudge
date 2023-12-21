// url = https://vjudge.net/problem/UVA-10699/origin

#include <bits/stdc++.h>
using namespace std;

int main()
{
    while(true){
        int n;
        cin>>n;
        int x = n;
        if(n==0) break;
        set<int> res;
        for(int i=2; i*i<=n ; i++){
            if(n%i==0){
                while(n%i==0){
                    res.insert(i);
                    n/=i;
                }
            }
        }
        if(n>1) res.insert(n);
        cout<<x<<" : "<<res.size()<<endl;
    }
    return 0;
}



