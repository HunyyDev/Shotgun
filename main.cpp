#include <bits/stdc++.h>
#define ll long long
//  https://khmt.uit.edu.vn/wecode/truonganpn/assignment/30/9
using namespace std;

ll reload_1,capability,fire_time,reload_all,enemy;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin>>reload_1>>reload_all>>capability>>enemy>>fire_time;
    ll ans=0;
    if (reload_1 < (double)reload_all/capability) {
        ans=(enemy-capability)*reload_1 + enemy*fire_time;
    }
    else {
        if (enemy%capability==0) {
            ans=enemy*fire_time+(enemy/capability-1)*reload_all;
        }
        else {
            ans=enemy*fire_time + (enemy/capability-1)*reload_all + min(enemy%capability*reload_1,reload_all);
        }
    }
    cout<<ans;
    return 0;
}
