#include <iostream>
using namespace std;

int main() {
 srand(time(NULL));
 int number = rand() % 100 + 1;
 int guess;

cout << "Guess the number 1-100: ";
cin >> guess;
if (guess == number) {
        cout << "You got it!" << endl;
}
else if (guess > number) {
        cout << "You guessed too high." << endl;
}
else {
        cout << "You guessed too low." << endl;
}

return 0;
}

