#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void f(int ind, string &s){
    int n = s.size();
    if(ind == n) return;

    if(s[ind] == 'p' && s[ind+1] == 'i'){
        s.push_back('*');
        s.push_back('*');
        int j;
        for(int j = n-1; j > ind+1; j--) {
            s[j+2] = s[j];
        }
        s[ind] = '3';
        s[ind+1] = '.';
        s[ind+2] = '1';
        s[ind+3] = '4';
        f(ind+4, s);
    }
    f(ind+1, s);
}

int main()
{
    string s = "abcpijpi";
    f(0, s);
    cout << s << endl;

    return 0;
}


// abcpicdfjj.