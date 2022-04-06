#include <iostream>
int main(){
  // Brain exploed here:
  
  for(int i = 1;i <= 100; i++ ){
    //std::cout << i << std::endl;

    // test if # is divisible by 3 and 5
    if (i % 3 == 0 && i % 5 == 0){
      std::cout << "FizzBuzz \n";
    }

    // test if # is divisible by 3
    else if (i % 3 == 0) {
      std::cout << "Fizz \n" ;
    }
    
    // test if # is divisible by 5
    else if(i % 5 == 0){
      std::cout << "Buzz \n";
    }

    // if is not divisible by 3 or 5, print just the number
    else {
      std::cout << i << std::endl;
    }
  }
}
