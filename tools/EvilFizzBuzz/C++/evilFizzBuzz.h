#include <iostream>

void modularFunctionFizzBuzz(int start, int stop, int step, int fizzFrequency, int buzzFrequency, const std::string fizz, const std::string buzz);




void modularFunctionFizzBuzz(int start, int stop, int step, int fizzFrequency, int buzzFrequency, const std::string fizz, const std::string buzz) {

    for (int i =start; i <= stop; i +=step) {
        if (i % fizzFrequency==0) {
            std::cout<<fizz;
        }
        if (i % buzzFrequency==0) {
            std::cout<<buzz;
        }

        if (i % buzzFrequency !=0 && i %fizzFrequency !=0) {
            std::cout<<i;
        }

        std::cout<<std::endl;


    }




}