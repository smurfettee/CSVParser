#pragma once
#include <vector>
#include <string>
#include "PriceRecord.h"

// declare your parser function here
std::vector<PriceRecord> parseCSV(const std::string& filename);