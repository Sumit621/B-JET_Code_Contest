#include<iostream>
#include<stdio.h>
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
        long long s;
        cin>>s;
        long long n=1;
        long long i=1;
        long long prev=0;
        long long count=1;
        count=sqrt(s-1)+1;
        n=count*count;
        prev=(count-1)*(count-1);
        long long shift;
        long long val1,val2;
        if(n-s>s-prev){
            val1=s-prev;
            val2=count;
        }
        else{
            val2=n-s+1;
            val1=count;
        }
        long long x,y;
        if(count%2!=0){
            x=val2;
            y=val1;
        }
        else{
            x=val1;
            y=val2;
        }
        cout<<"Case "<<tn<<": "<<x<<" "<<y<<"\n";
        tn++;
    }  
}