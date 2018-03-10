#include<iostream>
#include<algorithm>
using namespace std;
int x,a[10]={0,1,2,3,6,6,6,8,8,9};
int main(){
	cin>>x;
	int k=lower_bound(a,a+10,x)-a;
	if(a[k]<=x){
		int lb=lower_bound(a,a+10,a[k])-a;
		int ub=upper_bound(a,a+10,a[k])-a;
		cout<<k+ub-lb<<endl;
		cout<<"Yes"<<endl;
	}
	else 
		cout<<"No"<<endl;
	return 0;
}


