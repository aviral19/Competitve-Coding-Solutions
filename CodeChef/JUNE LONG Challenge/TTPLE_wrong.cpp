#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <cstddef>
#include <bitset>
#include <list>
#include <queue>


using namespace std;

#define ll long long
#define LOP(i,j,n) for(int i = j; i<n; i++)
#define MOD 1000000007
#define mp make_pair
#define pb push_back
#define FOREACH(it, l) for(auto it = l.begin(); it!= l.end(); it++)


long long answer(ll p, ll q, ll r, ll a, ll b, ll c){
    // case - 0
    if(p == a and q == b and r == c){
        return 0;
    }

    else{
        // case when only one number needs to be added
        if((p==a and q == b)||(p==a and r == c)||(q == b and r==c)){
                return 1;
        }
        // 
        ll pdiff, qdiff, rdiff;
        pdiff = a - p;
        qdiff = b - q;
        rdiff = c - r;
        // case when the difference is equal
        if(pdiff == qdiff and qdiff == rdiff) return 1;

        // case when one number is equal 
        // and the remaining difference is same 
        // and if the division is same

        if(p == a){
            if(qdiff == rdiff) return 1;
            if(q!=0 and r!=0){
            ll pdiv,qdiv,rdiv;
            
            ll qmod = b%q;
            ll rmod = c%r;
            qdiv = b/q;
            rdiv = c/r;

            if(qmod == 0 and rmod == 0 and qdiv == rdiv) return 1;
            }
            }
        if(q == b){
            if(pdiff == rdiff) return 1;
            if(p!=0 and r!=0){
            ll pdiv,qdiv,rdiv;
            ll pmod = a%p;
            
            ll rmod = c%r;
            pdiv = a/p;
            rdiv = c/r;

            if(pmod == 0 and rmod == 0 and pdiv == rdiv) return 1;
            }
            }
        if(r == c){
            if(qdiff == pdiff) return 1;
            if(p!=0 and q!=0){
            ll pdiv,qdiv,rdiv;
            ll pmod = a%p;
            ll qmod = b%q;

            pdiv = a/p;
            qdiv = b/q;

            if(qmod == 0 and pmod == 0 and pdiv == qdiv) return 1;
            }
            }
        
        // case when one multiplication is required.
        if(p!=0 and q!=0 and r!=0){
            ll pdiv,qdiv,rdiv;
            pdiv = a/p;
            qdiv = b/q;
            rdiv = c/r;

            if(a%p == 0 and b%q == 0 and c%r == 0 and pdiv == qdiv and qdiv == rdiv){
                return 1;
            }
        }

        
        
        
        // All cases of one complete

        // Cases of 2
        // if one number is equal
        if( p==a || q == b || r == c) return 2;

        // if two differences are same
        if(pdiff == qdiff or pdiff == rdiff or qdiff == rdiff) return 2;

        //if p,q,r are not 0 and if division of atleast 2 matches
        if(p!=0 and q!=0 and r!=0){
            ll pdiv,qdiv,rdiv;
            pdiv = a/p;
            qdiv = b/q;
            rdiv = c/r;
            ll pmod = a%p;
            ll qmod = b%q;
            ll rmod = c%r;

            if(pdiv == qdiv or pdiv == rdiv or qdiv == rdiv){
                if((pmod == 0 and rmod == 0) or (pmod == 0 and qmod == 0) or (qmod == 0 and rmod == 0)){
                    return 2;
                }
            }
        }

        //if q + pdiff is divisible as the same as c/r
        
        if((q+pdiff) != 0 and r != 0){
            ll qs = q+pdiff;
            if(( b/qs == c/r) and c%r == 0 and b%qs == 0) return 2;
        }

        if((r+pdiff) != 0 and q != 0){
            ll rs = r+pdiff;
            if(( c/rs == b/q) and c%rs == 0 and b%q == 0) return 2;
        }

        if((p+qdiff) != 0 and r != 0){
            ll ps = p+qdiff;
            if(( a/ps == c/r) and c%r == 0 and a%ps == 0) return 2;
        }
        
        if((r+qdiff) != 0 and p != 0){
            ll rs = r+qdiff;
            if(( c/rs == a/p) and c%rs == 0 and a%p == 0) return 2;
        }

        if((p+rdiff) != 0 and q != 0){
            ll ps = p+rdiff;
            if(( b/q == a/ps) and b%q == 0 and a%ps == 0) return 2;
        }
        
        
        if((q+rdiff) != 0 and p != 0){
            ll qs = q+rdiff;
            if(( b/qs == a/p) and b%qs == 0 and a%p == 0) return 2;
        }

        //What if we added to both the remaining numbers to the diff
        //and then multiply the remaining 2
        if((q+pdiff) != 0 and (r+pdiff) != 0){
            ll qs = q+pdiff;
            ll rs = r+pdiff;
            if(( b/qs == c/rs) and c%rs == 0 and b%qs == 0) return 2;
        }

        if((q+rdiff) != 0 and (p+rdiff) != 0){
            ll qs = q+rdiff;
            ll ps = p+rdiff;
            if(( b/qs == a/ps) and a%ps == 0 and b%qs == 0) return 2;
        }

        if((p+qdiff) != 0 and (r+qdiff) != 0){
            ll ps = p+qdiff;
            ll rs = r+qdiff;
            if(( a/ps == c/rs) and c%rs == 0 and a%ps == 0) return 2;
        }
    }
    return 3;
    // Try all type of test cases
}
int main() {
    int t; cin >> t;
    while(t--){
        ll p, q, r, a, b, c;
        cin >> p >> q >> r;
        cin >> a >> b >> c;
        
        cout << answer(p,q,r,a,b,c) << endl;
        
        
    }        
}
