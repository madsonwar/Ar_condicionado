#ifndef ARCONDICIONADO_HPP
#define ARCONDICIONADO_HPP
#include <stdio.h>
#include "Aparelho.hpp"
#include <iostream>
#include <string>
using namespace std;
class Arcondicionado : public Aparelho
{
public:
    Arcondicionado();
    Arcondicionado(const Arcondicionado &);
    ~Arcondicionado();
private:
    bool refrigerarVerntilar;
    
};

#endif // ARCONDICIONADO_HPP
