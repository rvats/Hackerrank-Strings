#include<iostream>
#include<string.h>
#define max 100005
using namespace std;
int ispalindrome(char s[],int n,int index){
    char a[n-1];
    for(int i=index;i<n;i++){
        a[i]=s[i+1];
    }
    int b=strlen(a);
    int flag=1;
    for(int i=0;i<b;i++){
        if(a[i]!=a[b-i-1]){
            flag=0;
            break;
        }
    }
    if(flag==0)
        return 0;
    else
        return 1;
}
int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        char s[max];
        cin>>s;
        int n;
        n=strlen(s);
        cout<<n;
        int flag=0;
        char r[n];
        for(int i=0;i<n;i++)
            r[i]=s[n-i-1];
        for(int i=0;i<n;i++){
            if(s[i]!=r[i]){
                if(ispalindrome(s,n,i))
                    cout<<i;
                else
                    cout<<n-i-1;
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"-1";
        cout<<"\n";
    }
    return 0;
}
