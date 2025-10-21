#include "as1.hpp"

namespace homework {

void swap_ptr(int* a, int* b, int *c){
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

UniqueData::UniqueData(int value): data_(std::make_unique<int>(value)) {}
int UniqueData::get() const {return *data_;}
void UniqueData::set(int value) {*data_ = value;}



}; // namespace homework
