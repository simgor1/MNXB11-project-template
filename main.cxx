#include <iostream>
#include "argh.h"

int main(int argc, char* argv[]) {
  argh::parser cmdl(argc, argv);

  cmdl({ "-h", "--help" }, "usage: ./main <input-csv-file>");

 if (cmdl.size() > 1) {
    // Check if at least one argument is provided (excluding the program name)
    std::string inputFilePath = cmdl[1];
    std::cout << "Reading CSV file: " << inputFilePath << std::endl;

    // Open and read the CSV file (implement your CSV processing logic here)
  } else {
    std::cout << "Usage: ./main <input-file>" << std::endl;
  }

  return 0;
}
