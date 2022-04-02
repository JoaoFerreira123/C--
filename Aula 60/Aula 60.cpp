#include <iostream>
#include <utility>

using namespace std;

int main(){
    int tam=3;
    pair <int, pair <string, double>> par[tam];

    par[0]=make_pair(10, make_pair("Mouse", 10.55));
    par[1]=make_pair(20, make_pair("Teclado", 50.49));
    par[2]=make_pair(30, make_pair("Monitor", 399.98));



    for (int i=0; i<tam; i++){
        cout << par[i].first << " - " << par[i].second.first << " - " << par[i].second.second << endl;
    }




	return 0;
}
