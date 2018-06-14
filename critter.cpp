#include <iostream>
#include <cstdlib>

using namespace std;

class Critter
{
public:

	Critter(){
		nHungerLevel = 50;
		nActiveLevel = 10;
	}

    int getHungerLevel(){
        return nHungerLevel;
    }

    int getActiveLevel(){
        return nActiveLevel;

    }

    void sleep(int nHoursSleep){
        nActiveLevel = nActiveLevel + nHoursSleep;
    }

    void feed(int nHunger){
        nHungerLevel = nHungerLevel - nHunger;
    }

    void play(int nActive){
        nActiveLevel = nActiveLevel - nActive;
    }

    void ShowData(){
		nHungerLevel++;

        if(nHungerLevel > 50){
            cout << "Питомец голодный" << endl;
        }
        if(nActiveLevel < 10){
            cout << "Питомец хочет спать" << endl;
        }

        cout << "Уровень голода = " << nHungerLevel << endl;
        cout << "Уровень активности = " << nActiveLevel << endl << endl;

		if(nHungerLevel > 70){
			cout << "Ваш питомец погиб от голода и вашего безразличия=(";
			exit(1);
		}
    }

private:

    int nHungerLevel;
    int nActiveLevel;
};

int main(){

	cout << "Приветствуем в тамагочи" << endl;
	Critter fox;

	while(1){
    cout << "Введите номер желаемого действия" << endl;
    cout << "1 - вывести уровень голода и активности питомца" << endl;
    cout << "2 - покормить питомца" << endl;
    cout << "3 - поиграть с питомцем" << endl;
    cout << "4 - уложить питомца спать" << endl << endl;

    int nNumber;
    cin >> nNumber;
    switch(nNumber){
        case 1: {
            fox.ShowData();
            break;
        }
        case 2: {
            cout << "Будем кормить питомца" << endl;
            cout << "Введите количество печенюшек" << endl;
            int  nCookie = 0;
            cin >> nCookie;
            fox.feed(nCookie);
            break;

        	}
        case 3: {
            cout << "Будем играть с питомцем" << endl;
            cout << "Введите количество упражнений" << endl;
            int  nActivity = 0;
            cin >> nActivity;
            fox.play(nActivity);
            break;
        }
        case 4: {
            cout << "Будем укладывать питомца спать" << endl;
            cout << "Введите количество часов сна" << endl;
            int  nHours = 0;
            cin >> nHours;
            fox.sleep(nHours);
            break;
        		}
    		}
		}
}
