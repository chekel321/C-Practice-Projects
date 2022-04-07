#include <iostream>
#include <vector>

int main(){
  int sum_Even = 0; // store even values
  int product_Odd = 1; // store odd values

  std::vector <int> numbers = {2, 4, 3, 6, 1, 9};
  for (int  i = 0; i < numbers.size(); i++){
    //std::cout << numbers[i] << "\n";

    // find the even numbers and add them up
    if (numbers[i] % 2 == 0){
      //std::cout << numbers[i] << "\n";
      sum_Even += numbers[i];
    }
    else {
      //std::cout << numbers[i];
      product_Odd *= numbers[i];

    }
  }
  std::cout << "the sum of even numbers : " << sum_Even << std::endl;
  std::cout << "the product of odd numbers : " << product_Odd << std::endl;
}
