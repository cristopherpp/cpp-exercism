#pragma once
#include <map>
#include <string>
#include <vector>
#include <iostream>

namespace grade_school {

// TODO: add your solution here
    using std::map;
    using std::string;
    using std::vector;
    
    class school {
    private:
      map<int, vector<string>> roster_;
    
    public:
      school() = default;
      const map<int, vector<string>> &roster() const;
      const vector<string> grade(int grade_number) const;
      void add(string name, int grade);
    };
}  // namespace grade_school
