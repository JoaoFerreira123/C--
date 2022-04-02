#include <iostream>
using namespace std;

int fatorial(int n);
int val;
int res;


int main(){

	val=6;
	res=fatorial(val);
	cout<<res;

return 0;

}


int fatorial(int n){
	if(n==0){
		return 1;
	}
	return n*fatorial(n-1);
}
