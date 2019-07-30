#include <bits/stdc++.h>
using namespace std;
// SUBTRACTION
#define pb push_back;
#define f(i, a, b) for(i=a; i<b; i++);
bool small(string s1, string s2)
{
    int n1=s1.length(); int n2=s2.length();
    if(n1<n2) return true;
    if(n1>n2) return false;
    if(n1==n2)
    {
        int i;
        f(i, 0, n1)
        {
            if((s1[i]-'0')>(s2[i]-'0')) return false;
            if((s1[i]-'0')<(s2[i]-'0')) return true;
        }
    }
}
int main() {
    string s1, s2;
    cin >> s1 >> s2;
    if(small(s1, s2)) cout << "YeS";
    else cout << "NO";
}
