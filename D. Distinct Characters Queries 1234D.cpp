#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int queries,opcion,uno, dos, posicion, inicio = 96;
    char letra;
    string cadena;
    cin>>cadena;
    vector <set<int> > vector(27);
 
    for (int i=0; cadena[i]; i++){
        vector[cadena[i]-inicio].insert(i+1);
        //cout<<cadena[i]-inicio<<" ";
    }
        /*
        for(set<int> :: iterator it = vector[0].begin(); it != vector[0].end();++it){
            cout<<*it<<endl;
        }*/
        cin>>queries;
        while(queries--){
            int noLetras=0;
            cin>>opcion;
            if (opcion==1){
                cin>>posicion>>letra;
                vector[cadena[posicion-1]-inicio].erase(posicion);
                cadena[posicion-1] = letra;
                vector[letra-inicio].insert(posicion);
            }
            else{
                cin>>uno>>dos;
                for (int i=1; i<27; i++){
                    set<int> :: iterator it = vector[i].lower_bound(uno);
                    //cout<<*it<<" ";
                    int valor = *it;
                    if (it != vector[i].end())
                        if(valor<=dos)
                            noLetras++;
                }
               cout<<noLetras<<endl;
            }
        }
}
