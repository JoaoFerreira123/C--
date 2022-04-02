#include <iostream>
#include <stack>
using namespace std;

int main(){

stack <int> pares;

pares.push(0);
pares.push(2);
pares.push(4);
pares.push(6);
pares.push(8);
pares.push(10);
pares.push(12);

cout << pares.top()<<"\n";

while(!pares.empty()){
	cout<<pares.top()<< "\n";
	pares.pop();
	
}

return 0;
}

