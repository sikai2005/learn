/* 
ID£ºsinan011
LANG:C++
TASK:friday
*/ 
#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("friday.in","r",stdin);
	freopen("friday.out","w",stdout);
	int d[7]={0,0,0,0,0,0,0};
	int m[12]={31,31,28,31,30,31,30,31,31,30,31,30};
	int a=3,n,r;
	cin>>n;
	for(int i=1900;i<=1900+n-1;i++){
		r=false;
		if(i%400==0||i%100!=0&&i%4==0){
		r=true;}
		
		for(int j=0;j<=11;j++){
			if(j==2&&r){
				a=(m[j]+1+a)%7;
			}
			else a=(m[j]+a)%7;
			d[a]++; 
		}
		
	}
	cout<<d[6];
	for(int i=0;i<=5;i++)cout<<' '<<d[i];
	cout<<endl;
	return 0;
}

