#pragma once

#include <string>
#include <iostream>
#include <random>
#include <memory>

namespace homework {

  // Random number generator setup
  inline std::random_device rd;
  inline std::mt19937 gen(rd()); 
  inline std::uniform_real_distribution<double> dist(0.0, 1.0);
  // to generate a random number between 0 and 1, use auto random_number = dist(gen);

  // Base class for entities
  // Has a implemented method getName()
  // Has a pure virtual method attack()
  // Has a pure virtual method clone() to support polymorphic copying
  // TO DO: Nothing, everything is implemented for you
  struct Entity {
      explicit Entity(const std::string name) : name{std::move(name)} {}
      virtual ~Entity() = default;
      virtual void attack() const = 0;
      std::string getName() const {
        return name;
      }

      virtual std::unique_ptr<Entity> clone() const = 0;
    protected:
      std::string name;
  };
  
  // as 2.1
  // Derived class Knight
  // TO DO: implement attack() and clone() and setWeapon()
  // Should have a private member variable for weapon (std::string)
  // Note: use std::make_unique in clone() and the this pointer to copy the object using chatGPT is okay for this purpose
  // The attack should use std::cout to print something like "<name> swings a <weapon>\n"
  // The setWeapon() method should set the weapon variable (the private member variable) 

    struct Knight : public Entity {
      explicit Knight(const std::string& name);
      void setWeapon(const std::string& weapon);
      void attack() const override;
      std::unique_ptr<Entity> clone() const override;
    private:
      std::string weapon_;
  };

  // as 2.2
  // Derived class Sorcerer
  // TO DO: implement attack() and clone() and setAbility()
  // Same as the Knight class

  struct Sorcerer : public Entity {
      explicit Sorcerer(const std::string& name);
      void setAbility(const std::string& ability);
      void attack() const override;
      std::unique_ptr<Entity> clone() const override;
    private:
      std::string ability_;
  };

  // as 2.3 (This is a stretch goal, hand it in, and if it does not work, you can still pass the assignment)
  // Duel class template
  // TO DO: create a struct/class called Duel that is templated by two types (T1 and T2)
  // The constructor should take two pointers (T1* and T2*)
  // The fight() method should:
  // - call attack() on both entities
  // - randomly select one of the two entities as the winner (use the random number generator above)
  // - print to std::cout "<name> wins the duel!\n"
  // - return a std::unique_ptr<Entity> to the winner (use clone() to copy the object)

  template <typename T1, typename T2>
  struct Duel {
      Duel(T1* a, T2* b);
      std::unique_ptr<Entity> fight(); // calls attack(), picks a winner, prints, returns clone
    private:
      T1* a_;
      T2* b_;
  };

} // namespace homework

