#include "as2.hpp"

namespace homework {


Knight::Knight(const std::string& name): Entity(name), weapon_("sword"){}

void Knight::setWeapon(const std::string& weapon) { weapon_ = weapon;}

void Knight::attack() const {
  std::cout << name << " swings a " << weapon_ << "\n";
}

std::unique_ptr<Entity> Knight::clone() const {
  
  auto k = std::make_unique<Knight>(this->name);
  k->weapon_ = this->weapon_;
  return k;
}


Sorcerer::Sorcerer(const std::string& name):Entity(name), ability_("fireball"){}

void Sorcerer::setAbility(const std::string& ability) {
  ability_ = ability;
}

void Sorcerer::attack() const {
  std::cout << name << " casts " << ability_ << "\n";
}

std::unique_ptr<Entity> Sorcerer::clone() const {
  auto s = std::make_unique<Sorcerer>(this->name);
  s->ability_ = this->ability_;
  return s;
}



template <typename T1, typename T2> Duel<T1,T2>::Duel(T1* a, T2* b) : a_(a), b_(b){}

template <typename T1, typename T2> std::unique_ptr<Entity> Duel<T1,T2>::fight() {
  a_->attack();
  b_->attack();

  const double r = dist(gen);
  Entity* winner = (r < 0.5) ? static_cast<Entity*>(a_) : static_cast<Entity*>(b_);

  std::cout << winner->getName() << " wins the duel!\n";

  return winner->clone();
}

template struct Duel<Knight,   Knight>;
template struct Duel<Knight,   Sorcerer>;
template struct Duel<Sorcerer, Knight>;
template struct Duel<Sorcerer, Sorcerer>;



} // namespace homework

