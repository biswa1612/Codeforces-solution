#include <bits/stdc++.h>
using namespace std ;
int n,F,S;
string s;
int main () {
scanf("%d",&n);
cin>>s;
sort(s.begin()  ,s.end()-n);
sort(s.begin()+n,s.end()  );
for(int i=0;i<n;i++){
    if(s[i]<s[n+i]) F++;
    if(s[i]>s[n+i]) S++;
}
cout<< ( (F==n||S==n) ? "YES" : "NO" );
    return 0;
}