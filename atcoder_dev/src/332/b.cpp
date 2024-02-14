#include <bits/stdc++.h>

using namespace std;

int main(){

    int k, g, m;
    cin >> k >> g >> m;

    int m_now = 0, g_now = 0;

    for(int i = 0; i < k; i++){
        if(g_now == g) g_now = 0;
        else  if(g_now!=g){
            if(m_now==0){
                m_now = m;
            }
            else {
                int tmp = m_now - (g - g_now);
                if(tmp >= 0){
                    g_now = g;
                    m_now = tmp;
                }
                else {
                    g_now += m_now;
                    m_now = 0;
                }
            }
        }
    }

    cout << g_now << " " << m_now << endl;

    return 0;
}