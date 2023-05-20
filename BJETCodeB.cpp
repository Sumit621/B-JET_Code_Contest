#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<math.h>

using namespace std;

double logTab[1000001];
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    logTab[0]=0;
    for(int i=1;i<=1000000;i++)
        logTab[i]=logTab[i-1] + log10(i);
    int t;
    cin>>t;
    int tn=1;
    while(tn<=t){
        long long n,base;
        cin>>n;
        cin>>base;
        long long count=(logTab[n]/log10(base))+1;
        cout << "Case "<<tn<<": "<< count << "\n";
        tn++;
    } 
}


