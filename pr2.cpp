#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int n,m=1,c=0;
	cin>>n;
	while(n!=0){
		c=c+n%10*m;
		m*=2;
		n/=10;
	}
	cout<<c;
	return 0;
}
