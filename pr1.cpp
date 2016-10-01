#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int n;
	cin>>n;
	if(n>0){
		n*=2;
	}
	if(n<0){
		n-=3;
	}
	if(n==0){
		n=10;
	}
	cout<<n;
	return 0;
}
