#include <iostream>
#include <string>

using namespace std;

class STR{
public:
    string input;

    void Direct(){
        cout << input << endl;
    }

    void Revers(){
        for(int i = 0, j = input.length() - 1; i < j; ++i, --j)
        swap(input[i], input[j]);
        cout << input << endl;
    }


};

int main() {
    STR RevStr = {"evil"};

    RevStr.Direct();

    RevStr.Revers();

    return 0;
}
