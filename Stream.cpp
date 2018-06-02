#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <cctype>
#include <algorithm>

using namespace std;

int main()
{
	vector <string> VectorSTR;
	string STR;
	string STR1;
	string boof;
	int countSTR = 10;
	int i, j;

	cout << "Введите строки разделённые пробелом" << endl;

		while (VectorSTR.size() < countSTR + 1){
		getline(cin, STR, ' ');
		transform(STR.begin(), STR.end(), STR.begin(), (int (*)(int)) tolower);
		VectorSTR.push_back(STR);

		STR1 = VectorSTR[0];
		const char * c = STR1.c_str();
		countSTR = atoi(c);
	}

	 for(j = 0; j < VectorSTR.size(); j++){
	 	for(i = 0; i < VectorSTR.size()-1; i++){

			if(VectorSTR[i].compare(VectorSTR[i + 1]) > 0){
				boof = VectorSTR[i];
				VectorSTR[i] = VectorSTR[i + 1];
				VectorSTR[i + 1] = boof;
			}
		}
	}

	for (int i = 1; i < VectorSTR.size(); i++) {
	    		cout << VectorSTR[i] << " ";
	    	 }
}
