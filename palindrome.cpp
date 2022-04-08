#include <iostream>

// Define is_palindrome() here:
bool is_palindrome(std::string text){
  std::string re_text; // create an empty string to store reverse values of text
  
  // create a loop that starts at the end of string text and add each value to string re_text
  for(int i = text.size() -1; i >= 0;i--){
    re_text.push_back(text[i]);
  }
  
  // compare both strings and return true if they match
  // else return, false
  if(text == re_text){
    return true;
  }
  else{
    return false;
  }
  
}
int main() {
  
  
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
  
  
  
}
