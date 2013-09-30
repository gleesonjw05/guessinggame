#include <iostream>
using namespace std;

int main() {
 srand(time(NULL));
 int number = rand() % 100 + 1;
 int guess;
 int guesses = 0;
while (guess != number) {

cout << "Guess the number 1-100: ";
cin >> guess;
if (guess == number) {
        cout << "You got it!" << endl;
        break;
}
else if (guess > number) {
        cout << "You guessed too high. Try again." << endl;
}
else {
        cout << "You guessed too low. Try again." << endl;
}
}
return 0;
}
