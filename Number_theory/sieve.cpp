#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define endl "\n"
#define MOD 1000000007
#define MX 100010
void solve(){
    int max = 1000001;
    bool is_prime[max];
    memset(is_prime,true, sizeof(is_prime));
    is_prime[0] = is_prime[1] = false;
    for(int i = 2 ; i*i <= max ; i++){
        if(is_prime[i]== true){
            for(int j = i*i ; j <= max ; j+=i){
                is_prime[j] = false;
            }
        }
    }
}
int main(){
    fast;
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}