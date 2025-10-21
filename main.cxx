/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include "as2.hpp"
#include <iostream>

using namespace homework;

int main() { 
  std::cout<<"Task 1 \n\n";
  int x = 10;
  int y = 20; 
  int z = 30;
  std::cout << "as1\nswap in: (" << x << "," << y << "," << z << ")\n";
  homework::swap_ptr(&x, &y, &z);
  std::cout << "swap out:(" << x << "," << y << "," << z << ")\n";



  std::cout<<"Task 2 \n\n";
  homework::UniqueData box(5);
  std::cout << "UniqueData: " << box.get() << "\n";
  box.set(9);
  std::cout << "UniqueData set-> " << box.get() << "\n";

  homework::Knight k{"Hulk"}; k.setWeapon("smash");
  homework::Sorcerer s{"Spiderman"}; s.setAbility("web");

  k.attack();
  s.attack();

  homework::Duel<homework::Knight, homework::Sorcerer> duel(&k, &s);
  auto winner = duel.fight();
  std::cout << "Winner clone attacks: ";
  winner->attack();

  
}

