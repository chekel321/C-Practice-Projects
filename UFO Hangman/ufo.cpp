#include <iostream>
#include "ufo_functions.hpp"

int main() {
std::string codeword = "codecademy";
std::string answer = "__________";

int misses = 0;
std::vector <char> incorrect;
bool guess = false;

char letter;

  // Greetings
  greet();

  // Loop 
  while (answer != codeword && misses < 7){
    display_misses(misses);
    
    // Display incorrect and correct answers
    display_status(incorrect, answer);
    
    // Gather input from user
    std::cout << "\nPlease enter your guess: \n";
    std::cin >> letter;
    
    for(int i = 0; i < codeword.length(); i++){
      if (letter == codeword[i]){
        answer[i] = letter;
        guess = true;
        
      }
    }

    // If letter is found, display Correct!
    if (guess){
      std::cout << "\nCorrect!\n";
    }

    // Otherwise, display Incorrect! and add letter to incorrect vector
    else{
      std::cout << "\nIncorrect! The tractor beam pulls the person in further.\n";
        incorrect.push_back(letter);
        misses++;
    }

    // change guess back to false
    guess = false;
    
  }
  

  // Exit loop if player has won or lost
  end_game(answer, codeword);

}
