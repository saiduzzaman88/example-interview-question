//
// Created by lafayett on 30/01/19.
//

#ifndef MARKS_MARKS_H
#define MARKS_MARKS_H


#include <string>
#include <unordered_map>
#include <map>
#include <map>
#include <vector>

class Marks {
public:

    Marks() = default;
    ~Marks() = default;

    explicit Marks(const std::unordered_map<std::string, double>& classMarks);

    double averageSomeClasses(const std::vector<std::string>& classes) const;

    void addMark(const std::string &classs, double mark);

private:

    friend std::ostream &operator<<(std::ostream &, const Marks &);

    std::unordered_map<std::string, double> classMarks;
};

std::ostream &operator<<(std::ostream &strm, const Marks &marks);

#endif //MARKS_MARKS_H
