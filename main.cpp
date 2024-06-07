#include <iostream>

int main() {
  long num, contador = 0;
  std::cin>>num;
  do{
    if (num % 10 != 7 && num % 10 != 4){
      contador++;
    }
    num /= 10;
  }while (num > 0);
  if(contador > 0){
    std::cout << "NAO" << std::endl;
  } else{
    std::cout << "SIM" << std::endl;
  }
}