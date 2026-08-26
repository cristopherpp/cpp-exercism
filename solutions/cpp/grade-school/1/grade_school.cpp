#include "grade_school.h"

#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

namespace grade_school {

// TODO: add your solution here
    const map<int, vector<string>> &school::roster() const { return roster_; }
    const vector<string> school::grade(int grade_number) const {
      return roster_.find(grade_number)->second;
    }
    void school::add(string name, int grade) {
      roster_[grade].push_back(name);
      std::sort(roster_[grade].begin(), roster_[grade].end());
    }
}  // namespace grade_school
