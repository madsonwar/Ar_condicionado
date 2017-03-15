#ifndef APARELHO_HPP
#define APARELHO_HPP
#include <iostream>
#include <string>
using namespace std;
class Aparelho
{
public:
    Aparelho();
    Aparelho(const Aparelho &);
    virtual void ligarDesligar() = 0;
    virtual void aumen() = 0;
    virtual void dimin() = 0;
    bool getOnOff();
    int getVolume();
    string getNome();
    void setOnOff(bool &);
    void setVolume(int &);
    void setNome(string &);
    ~Aparelho();
private:
    bool onOff;
    int volume;
    string nome;
    

};

#endif // APARELHO_HPP
