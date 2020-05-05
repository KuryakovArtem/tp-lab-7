#pragma once
#include <iostream>
#include <list>
#include <vector>
#include <ctime>
#include <time.h>
#include <iterator>
#include <algorithm>
#include  <string>

typedef size_t coord_t;

struct Pair
{
    size_t x; // 0..M-1
    size_t y; // 0..N-1
};

const size_t N = 20;
const size_t M = 20;
const size_t LIMITSTONE = 500;
const size_t REPRODUCETIME = 3;
const size_t LIMITPREDATOR = 12;
const size_t LIMITPREY = 15;
const size_t Search_Attempts = 8;