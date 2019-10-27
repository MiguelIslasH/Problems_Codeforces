#include<bits/stdc++.h>

using namespace std;

int main(){
	int q,n;
	cin>>q;
	while(q--){
		cin>>n;
		bool bandera = true;
		vector<int>skills(n);
		for(int i = 0 ; i < n ; i++){
			cin>>skills[i];
		}
		sort(skills.begin(), skills.end());
		
		for(int i = 0 ; i < n-1 ; i++){
			if(skills[i]-skills[i+1]==-1){
				cout<<2<<endl;
				bandera=false;
				break;
			}
	 }
		if(bandera)
			cout<<1<<endl;
	}
}
