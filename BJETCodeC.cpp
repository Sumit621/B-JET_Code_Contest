#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<math.h>

using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    int tn=1;
    while(tn<=t){
        long long n,k;
        cin>>n;
        cin>>k;
        long long i = 1, ans = 0;
        while (i <= n) {
            ans = (ans + k) % i;
            i++;
        }
        cout << "Case "<<tn<<": "<< ans+1 << "\n";
        tn++;
    } 
}