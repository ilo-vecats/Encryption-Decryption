#ifndef ENCODE_H
#define ENCODE_H
#include <string>
#include <iostream>
#include <fstream>
#include <ostream>

using namespace std;
class encode
{
    public:
        encode();
        virtual ~encode();

        string Getfile() { return file; }
        void Setfile(string val) { file = val; }
        char Getc() { return c; }
        void Setc(char val) { c = val; }
        int Getkey(){return key;}
        void Setkey(int val){key = val;}

        void encrypt();
        void decrypt();
        void filldiary();


    private:
        string file;
        char c;
        int key;
};

#endif // ENCODE_H
