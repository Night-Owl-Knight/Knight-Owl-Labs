#include <iostream>

#include "evilFizzBuzz.h"



int main() {
    int start = 1, stop = 100, step = 1, fizzFreq =3, buzzFreq=5;
    std::string fizz = "Fizz", buzz ="Buzz";

    modularFunctionFizzBuzz(&start, &stop, &step, &fizzFreq, &buzzFreq, &fizz, &buzz);


    return 0;
}

