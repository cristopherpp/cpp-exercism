#include <array>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    std::vector<int> scores {};

    for (int i{0}; i < student_scores.size(); ++i)
        {
            double score = student_scores[i];
            scores.emplace_back(static_cast<int>(score));
        }

    return scores;
}


// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    int count = 0;
    for (auto i : student_scores)
        {
            if (i <= 40)
                ++count;
        }
    return count;
}

// Determine how many of the provided student scores were 'the best' based on the provided threshold.
std::vector<int> above_threshold(std::vector<int> student_scores, int threshold) {
    std::vector<int> scores = {};

    for (auto i : student_scores)
        {
            if (i >= threshold)
            {
                scores.emplace_back(i);
            }
        }
    return scores;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    int difference = highest_score - 40;
    int section = difference / 4;
    int D = 40 + 1;
    int C = D + section;
    int B = C + section;
    int A = B + section;
    
    return std::array<int, 4> {D, C, B, A};
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(std::vector<int> student_scores, std::vector<std::string> student_names) {
    std::vector<std::string> str{};
    int rank = 1;

    std::vector<std::pair<int, std::string>> students;

    for (size_t i = 0; i < student_scores.size(); ++i)
        {
            students.emplace_back(student_scores[i], student_names[i]);
        }
    sort(students.begin(), students.end(), [](const auto& a, const auto& b)
        {
            return a.first > b.first;
        });

        for (auto student : students)
        {
            str.emplace_back(std::to_string(rank) + ". " + student.second + ": " + std::to_string(student.first));
            ++rank;
        }

    return str;
}

// Create a string that contains the name of the first student to make a perfect score on the exam.
std::string perfect_score(std::vector<int> student_scores, std::vector<std::string> student_names) {
    for (size_t i = 0; i < student_scores.size(); ++i)
        {
            if (student_scores[i] == 100) return student_names[i];
        }
    return "";
}
