#pragma once
#include <string>

struct PriceRecord {
    std::string date;
    float open;
    float high;
    float low;
    float close;
    long volume;
};