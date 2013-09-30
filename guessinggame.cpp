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
        guesses++;
        cout << "You got it!" << endl;
        cout << "Total guesses: " << guesses << endl;
        break;
}
else if (guess > number) {
        guesses++;
        cout << "You guessed too high. Try again." << endl;
}
else {
        guesses++;
        cout << "You guessed too low. Try again." << endl;
}

}
return 0;
}
~

