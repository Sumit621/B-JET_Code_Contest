#include <bits/stdc++.h>
#include<vector>
using namespace std;
  
void computeLPSArray(string pat, int M, int lps[]){
    int len = 0;
    int i = 1;
    lps[0] = 0; 
 
    while (i < M) {
        if (pat[i] == pat[len]) {
            len++;
            lps[i] = len;
            i++;
        }
        else 
        {
            if (len != 0) {
                len = lps[len - 1];
            }
            else 
            {
                lps[i] = len;
                i++;
            }
        }
    }
}
 
int KMPSearch(string pat, string txt){
    int M = pat.length();
    int N = txt.length();

    int lps[M];
    int j = 0;

    computeLPSArray(pat, M, lps);
 
    int i = 0;
    int res = 0;
 
    while (i < N) {
        if (pat[j] == txt[i]) {
            j++;
            i++;
        }
        if (j == M) {

            j = lps[j - 1];
            res++;
        }
  
        else if (i < N && pat[j] != txt[i]) {

            if (j != 0)
                j = lps[j - 1];
            else
                i = i + 1;
        }
    }
    return res;
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    int tn=1;
    while(tn<=t){
        string txt,pat;
        cin>>txt;
        cin>>pat;
        int ans = KMPSearch(pat, txt);
        cout << "Case "<<tn<<": "<< ans << "\n";
        tn++;
    }
}
 