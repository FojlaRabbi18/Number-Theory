#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    string a; 
    cin >> a;

    int b;
    cin >> b;
    
    int ans = 0;
    for(int i = 0; i < a.size(); i++) {
        ans = ((ans * 10 % b) % b + (a[i] - '0') % b) % b;
    }
    cout << ans;
    // 5265 % 11 = 7
    // (526 * 10 + 5) % 11 = 5265 % 11
    // (52 * 10 + 6) % 11 = 526 % 11

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}

