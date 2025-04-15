#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define endl '\n'


using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,c=1,x,y;
    while(cin >> n && n != 0){
        if(c != 1)cout << endl;
        
        
        map<int,int> m;
        float media = 0;
        int sx = 0;
        for(int i = 0; i < n; i++) 
            cin >> x >> y,  m[y/x] += x, sx += x, media += y;
        
        
        cout << "Cidade# " << c++ << ":" << endl;
        
        media /= sx;
        bool f = 0;
        for(auto &i: m){
            if(f) cout << ' ';
            cout << i.second << '-' << i.first;
            if(!f) f = 1;
        }


        cout << endl;
        int k=media*100;
        
        int l,r;
        r = k % 10;
        k /= 10;
        l = k % 10;
        k /= 10;
        
        
        cout << setprecision(2) << fixed << "Consumo medio: " << k << '.' << l << r << " m3."<< endl;
    }
    return 0;
}