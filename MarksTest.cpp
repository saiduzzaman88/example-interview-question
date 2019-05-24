//
// Created by lafayett on 30/01/19.
//

#include <unordered_map>
#include <cmath>
#include <iostream>
#include "Marks.h"
#include "gtest/gtest.h"

std::unordered_map<std::string, double> classMarks{
        {"MT101", 80.0},
        {"CS101", 81.0},
        {"HS101", 82.0},
};

TEST(example, averageClasses_withNone) {
    Marks marks(classMarks);
    marks.addMark("PS101", 79.9);
    std::cout << "Testing averageClasses_withNone " << marks << std::endl;
    std::vector<std::string> classes{};
    double avg = marks.averageSomeClasses(classes);
    ASSERT_DOUBLE_EQ(0.0, avg);
}

TEST(example, averageClasses_withAll) {
    Marks marks(classMarks);
    std::cout << "Testing averageClasses_withAll " << marks << std::endl;
    std::vector<std::string> classes{
            "MT101",
            "CS101",
            "HS101",
    };
    double avg = marks.averageSomeClasses(classes);
    ASSERT_DOUBLE_EQ(81.0, avg);
}

TEST(example, averageClasses_withSome) {
    Marks marks(classMarks);
    std::cout << "Testing averageClasses_withSome " << marks << std::endl;
    std::vector<std::string> classes{
            "CS101",
            "HS101",
            "NOT",
    };
    double avg = marks.averageSomeClasses(classes);
    ASSERT_DOUBLE_EQ(81.5, avg);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}