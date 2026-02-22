#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <iomanip> // For proper table formatting

// 1. Structure to hold the subject information
struct CourseRequirement {
    std::string subjectName;
    int minPoints;
};

  // 2. function to convert Grade to points in numerics

int gradeToPoints(std::string grade) {
    static std::map<std::string, int> pointsMap = {
        {"A", 12}, {"A-", 11}, {"B+", 10}, {"B", 9}, {"B-", 8}, {"C+", 7}, {"C", 6}
    };
      // If grade is in te map,return points.If not,return 0

    return pointsMap.count(grade) ? pointsMap[grade] : 0;
}

int main() {
    // 3. Define the University Standards for Engineering
    std::vector <CourseRequirement> requirements = {
        {"Mathematics", 11}, // A- or higher
        {"Physics", 11},     // A- or higher
        {"Chemistry", 10},   // B+ or higher
        {"English", 9}, //B plain or higher
        {"Kiswahili",7}, //C+ or higher
        {"Biology",8}, //B- or higher
        {"Geography",7} // C+ or highe



              // B or higher
    };

    std::cout << "====================================\n";
    std::cout << "   UNIVERSITY ADMISSION SYSTEM      \n";
    std::cout << "====================================\n";

    std::vector<std::pair<std::string, std::string>> studentGrades;
    bool qualified = true;
    double totalPoints = 0;

    // Input loop
    for (const auto& req : requirements) {
        std::string inputGrade;
        std::cout << "Enter your grade for " << req.subjectName << ": ";
        std::cin >> inputGrade;

        int pointsAchieved = gradeToPoints(inputGrade);
        studentGrades.push_back({req.subjectName, inputGrade});
        totalPoints += pointsAchieved;

        // 5. Logic: Check if the grade meets the specific subject minimum
        if (pointsAchieved < req.minPoints) {
            qualified = false;
        }
    }

    // Bring up the final report

    std::cout << "\n--- ADMISSION REPORT ---\n";
    std::cout << std::left << std::setw(15) << "Subject" << "| " << "Grade" << " | " << "Status" << "\n";
    std::cout << "--------------------------------------\n";

    for (size_t i = 0; i < requirements.size(); i++) {
        int points = gradeToPoints(studentGrades[i].second);
        std::string status = (points >= requirements[i].minPoints) ? "PASS" : "FAIL";

        std::cout << std::left << std::setw(15) << studentGrades[i].first
                  << "| " << std::setw(5) << studentGrades[i].second
                  << " | " << status << "\n";
    }

    // final decision

    double meanPoints = totalPoints / requirements.size();
    std::cout << "--------------------------------------\n";
    std::cout << "MEAN GRADE POINTS: " << std::fixed << std::setprecision(1) << meanPoints << "\n";

    if (qualified && meanPoints >= 10.0) {
        std::cout << "\nRESULT: CONGRATULATIONS! You are qualified for Engineering.\n";
    } else {
        std::cout << "\nRESULT: SORRY. You do not meet the criteria for this course.\n";
    }

    return 0;
}
