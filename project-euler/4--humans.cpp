#include <iostream>
#include <string>

int main() {
  int answer = 0;
  for (int number1 = 999; number1 > 0; number1--)
    for (int number2 = 999; number2 > 0; number2--) {
      int potentialPalindrome = number1 * number2;
      std::string potentialPalindromeString =
          std::to_string(potentialPalindrome);
      std::string potentialPalindromeReversedString =
          std::to_string(potentialPalindrome);
      std::reverse(potentialPalindromeReversedString.begin(),
                   potentialPalindromeReversedString.end());
      if (potentialPalindromeString.compare(
              potentialPalindromeReversedString) == 0 &&
          potentialPalindrome > answer)
        answer = potentialPalindrome;
    }
  std::cout << answer;

  return 0;
}