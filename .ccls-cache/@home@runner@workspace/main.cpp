#include <cmath>
#include <iostream>

// Checks if number passed is prime
bool isPrimeNumber(int num) {
  const int sqrtNum = std::sqrt(num);

  if (num < 2 || (sqrtNum * sqrtNum == num)) return false; // edge cases: number < 2 and perfect squares are never prime

  for (int i = 2; i < sqrtNum; i++) 
    if (num % i == 0) return false; // there are smaller-divisors, so it is not prime
  
  return true; // did not find smaller-divisors, so it is a prime
}

int main() {
  std::cout << "Testing: " << isPrimeNumber(10) << std::endl; // 0
  std::cout << "Testing: " << isPrimeNumber(1) << std::endl;  // 0
  std::cout << "Testing: " << isPrimeNumber(7) << std::endl;  // 1
  return 0;
}