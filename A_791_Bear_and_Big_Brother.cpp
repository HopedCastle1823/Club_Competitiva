#include <bits/stdc++.h>
using namespace std;
#define SPEED ios_base::sync_with_stdio(0);

int main(){
	SPEED; //inicia la funcion de acelerar cin y cout

	int a, b, y=0;
	cin >> a >> b;

	while (a<=b){
		a *= 3;
		b *= 2;
		y ++;
		
	}

	cout << y;

	return 0;
}
