//
// Created by lafayett on 30/01/19.
//

#include <algorithm>
#include <iostream>
#include <iomanip>
#include "Marks.h"

Marks::Marks(const std::unordered_map<std::string, double> &classMarks) :
        classMarks(classMarks) {}

double Marks::averageSomeClasses(const std::vector<std::string> &classes) const {
    // TODO Write this method

    return 0;
}
void Marks::addMark(const std::string &classs, const double mark) {
    classMarks[classs] = mark;
}

std::ostream &operator<<(std::ostream &ostr, const Marks &marks) {
    ostr << "Classes: " << std::endl;
    std::for_each(marks.classMarks.cbegin(), marks.classMarks.cend(),
                  [&](const std::pair<std::string, double> &entry) {
                      ostr << "\t" << entry.first << ": " << std::fixed << std::setprecision(2) << entry.second
                           << std::endl;
                  });
    return ostr;
}