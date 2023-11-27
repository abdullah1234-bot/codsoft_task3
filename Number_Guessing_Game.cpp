#include <iostream>
#include <ctime>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main(){
    srand(time(0));
    int num = rand() % 10000 + 1;
    int guess, tries = 0;
    
    cout << "************************ WELCOME TO NUMBER GUESSING GAME ************************" <<endl<<endl<< "Enter a number you guess between 1 to 10000: ";
    cin >> guess;
    do{
        if (guess > num){
            cout << "Your Guess is higher than the number. Try Again!" << endl;
            tries++;
        }
        else if (guess < num){
            cout << "Your Guess is lower than the number. Try Again!" << endl;
            tries++;
        }
        cout << "Enter a number you guess: ";
        cin >> guess;
    } while (guess != num);
    cout <<endl<< "CONGRATULATIONS! You guessed the correct number after " << tries << " tries" << endl<< endl << endl << "************************ THANK YOU FOR PLAYING NUMBER GUESSING GAME ************************";
    getch();
	return 0;
}