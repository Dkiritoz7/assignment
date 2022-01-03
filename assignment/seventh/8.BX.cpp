#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main() {
    const char* noun[5] = {"boy ", "girl ", "dog ", "town ", "car "};
    const char* verb[5] = {"drove ", "jumped ", "ran ", "walked ", "skipped "};
    const char* preposition[5] = {"to ", "from ", "over ", "under ", "on "};
    srand(time(0));
    for (int i = 0; i <= 19; i++) {
        const char* article[5] = {"the ", "a ", "one ", "some ", "any "};
        int RandomNumber = rand() % 5;
        char a = *article[RandomNumber] - 32;
        article[RandomNumber] = (article[RandomNumber] + 1);
        cout << a << article[RandomNumber] << " " << noun[RandomNumber] << " "
             << verb[RandomNumber] << " " << preposition[RandomNumber] << endl;
    }
    return 0;
}