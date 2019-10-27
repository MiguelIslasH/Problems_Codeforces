#include <bits/stdc++.h>
using namespace std;
 
long long int cubeta[100020];
 
long long int mem[100020];
 
long long int sumador(long long int indice);
 
int main(){
	memset(mem, -1, sizeof(mem));
	long long int n,numero;
	cin>>n;
	for (long long int i=0; i<n; i++){
		cin>>numero;
		cubeta[numero]++;
	}
	
	cout<<sumador(1ll);
	return 0;
}
 
long long int sumador(long long int indice){
	if ((indice >= 100010 )){
		return 0;
	}
	
	if (mem[indice] != -1){
		return mem[indice];
	}
	
	long long int tomar=sumador(indice + 2) + cubeta[indice] * indice;
	
	long long int noTomar=sumador(indice + 1) ;	
	
	mem[indice]=max(tomar,noTomar);
	
	return mem[indice];
}
