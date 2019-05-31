#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <cassert>
using namespace std;


#ifndef LAB01_HEADER_H
#define LAB01_HEADER_H

bool is_prime(int num);

bool is_magnanimous(int num);
void test_magnanimous();

bool is_jordan_polya(int num);
void test_jordan_polya();

bool is_alternating(int num, int base);
void test_alternating();

bool is_duffinian(int num);
void test_duffinian();

bool is_apocalypse(int num);
void test_apocalypse();

#endif //LAB01_HEADER_H
