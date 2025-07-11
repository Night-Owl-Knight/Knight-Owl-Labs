#include <iostream>
#include <string>
#include "evilFizzBuzz.h"


FizzBuzzEngine::FizzBuzzEngine(const fizzBuzzConfig* config) : cfg(config) {}

int main() {
    int start = 1, stop = 100, step = 1, fizzFreq =3, buzzFreq=5;
    std::string fizz = "Fizz", buzz ="Buzz";

   
    fizzBuzzConfig config;
    FizzBuzzEngine engine(&config);
    engine.run();

    //modularFunctionFizzBuzz(&start, &stop, &step, &fizzFreq, &buzzFreq, &fizz, &buzz);


    return 0;
}
