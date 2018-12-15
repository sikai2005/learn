/* 
ID£ºsinan011
LANG:C++
TASK:ride 
*/ 
#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("ride.in","r",stdin);
	freopen("ride.out","w",stdout);
	string a,b;
	 
	long long suma=1,sumb=1;
	cin>>a>>b;
	for(int i=0;i<=a.size()-1;i++) {
		suma*=(a[i]-'A'+1);
	}
	for(int i=0;i<=b.size()-1;i++) {
		sumb*=(b[i]-'A'+1);
	}
	if(suma%47==sumb%47)cout<<"GO"<<endl;
	else cout<<"STAY"<<endl;
	return 0;
}

