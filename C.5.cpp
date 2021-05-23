#include <iostream>
using namespace std;
int f[100];
void tach (int n,int s,int t){
	for (int i=n;i>=1;i--){
		f[t]=i;
		if(s-i==0){
			for (int j=0;j<=t;j++){
				cout << f[j];
			}
			cout << endl;
			
		}
		if(s-i>0){
			tach (i,s-i,t+1);
			
		}
	}
}
int main (){
	int n;
	cin >> n;
	tach (n,n,0);
	return 0;
}
