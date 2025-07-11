#pragma once

#include <iostream>

void modularFunctionFizzBuzz(int* start, int *stop, int* step, int* fizzFrequency, int* buzzFrequency, const std::string* fizz, const std::string* buzz);







struct fizzBuzzConfig {
    int start = 1, stop =100, step =1, fizzFreq =3, buzzFreq=5;
    std::string fizz = "fizz", buzz = "buzz";

};


class FizzBuzzEngine {

    public:
    FizzBuzzEngine(const fizzBuzzConfig* config);

    void run();

    private:
    const fizzBuzzConfig* cfg;

};