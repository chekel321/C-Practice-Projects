#include <iostream>
#include <vector>
#include <string>

int main(){

  // Whale, whale, whale.
  // What have we got here?

  std::string input = "hi, human";

  std::vector <char> vowels = {'a', 'e', 'i', 'o', 'u'};
  std::vector <char> result;
  //std::cout << vowels[1];

  for (int i = 0; i < input.size(); i++){

    // loop through both vectors to look for a match
    // if match was found, push it to result
    for(int in = 0; in < vowels.size(); in++){
        if (input[i] == vowels[in]){
          result.push_back(input[i]);
        }
    }
    
    // if the vowel has an 'e' or 'u', double it
    if (input[i] == 'e' || input[i] == 'u'){
      result.push_back(input[i]);
    }
  }
  
  // print all vowels in result
  for (int j = 0;j < result.size(); j++){
    std::cout << result[j];
  }
  
  
}
