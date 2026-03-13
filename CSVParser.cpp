#include "CSVParser.h"
#include <fstream>
#include <sstream>

std::vector<PriceRecord> parseCSV(const std::string& filename) {
    std::vector<PriceRecord> records;
    std::ifstream file(filename);
    std::string line;

    std::getline(file, line);

    while (std::getline(file, line)) {
        std::stringstream ss(line);
        PriceRecord record;
        std::string token;

        //todo: parse the line and fill the record fields

        records.push_back(record);
    }

    return records;
}
