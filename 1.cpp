#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

string DA[2][15]={
    {"A","B","B","A","D","C","C","A","B","D","C","C","A","B","D"}, 
    {"A","C","C","A","B","C","D","D","B","B","C","D","D","B","B"}
};

int main(){
	int t;
	cin >> t;
	while(t--){
		string made;
		cin >> made;
		int ma = (made == "101") ? 0 : 1;
		int dung = 0;
		for(int i = 0; i < 15;i++){
			string thi;
			cin >> thi;
			if(thi == DA[ma][i]) dung++;
		}
		double diem = (dung*10.0)/15;
		cout << fixed << setprecision(2) << diem <<endl;
	}
	return 0;
}
