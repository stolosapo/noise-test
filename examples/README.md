# example of using `noisetest` lib

## build example
```bash
g++ -g -c -o SimpleTestSuite1.o SimpleTestSuite1.cpp
g++ -g -c -o SimpleTestSuite2.o SimpleTestSuite2.cpp
g++ -g -c -o MainTestSuite.o MainTestSuite.cpp
g++ -g -c -o example.o example.cpp
g++ SimpleTestSuite1.o SimpleTestSuite2.o MainTestSuite.o example.o -o example -lnoisetest
./example
```
