#include <iostream>
#include <vector>
using namespace std;

int main(){

    int x1,x2,x3,x4;
    x1=10;
    x2=5;
    x3=2;
    x4=12;

    auto soma=[x1,x2,x3,x4]()->int{
        return x1+x2+x3+x4;
    };

    cout << soma() << endl;

    auto maior=[](vector<int>vec)->int{
      auto m=0; //vai receber o maior número
      for(int i:vec){ //vai percorrer o vector vec com a variavel i
            m=(m>i)? m:i;
      }
      return m;

    };

    cout << maior({9,8,7,6,5,89,41,93,54,75,21,9,5,3,0})<<endl;
	return 0;
}
