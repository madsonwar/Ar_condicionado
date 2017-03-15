#include "Aparelho.hpp"
#include <iostream>
#include <string>
using namespace std;
Aparelho::Aparelho()
{
    this->nome = "Desconhecido";
    this->onOff = false;
    this->volume = 0;
}

Aparelho::Aparelho(const Aparelho &device)
{
    this->nome = device.nome;
    this->onOff = device.onOff;
    this->volume = device.volume;
}


Aparelho::~Aparelho()
{
}

string Aparelho::getNome()
{
    return this->nome;
}

bool Aparelho::getOnOff()
{
    return this->onOff;
}

int Aparelho::getVolume()
{
    return this->volume;
}

void Aparelho::setNome(string &nome )
{
    this->nome = nome;
}

void Aparelho::setOnOff(bool &onoff)
{
    this->onOff = onoff;
}

void Aparelho::setVolume(int &volume)
{
    this->volume = volume;
}
