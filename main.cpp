#include <iostream>
#include "./cdcl.hpp"

void printCnf(CNF &cnf) {
    for (int i = 0; i < (int) cnf.size(); i++) {
        std::cout << "  C" << i << ": " << cnf[i].toString() << std::endl;
    }
}

int main(){
  Clause c1 = {1,2,3,-7,-5,6};
  Clause c2 = {7,12,15};

  int nlit;
  CNF c;
  ReadFromFile("cnfFiles/examples/CBS_k3_n100_m403_b10_0.cnf", c);
  printCnf(c);
}
