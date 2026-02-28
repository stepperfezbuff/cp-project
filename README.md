# cp-project
{COURSE PREREQUISITE CHECKER PROGRAM}
# University Admission System (Electrical Engineering)

A C++ program designed to evaluate students' eligibility for an Electrical Engineering course based on specific subject-grade requirements and an overall mean point threshold.

#OVERVIEW

The **University Admission System** automates the grading process by converting letter grades into a numeric points. It compares a student's performance against predefined university standards for seven core subjects to determine if they qualify for admission.



#FEATURES

-Grade-to-Points Conversion: Automatically maps letter grades (A to C) to a 12-point system.
-Specific subject Validation: Checks minimum requirements for Mathematics, Physics, Chemistry, English, Kiswahili, Biology, and Geography.
-Real-time Reporting: Generates a formatted table showing the "PASS/FAIL" status for each subject.
-Eligibility Logic: Requires a "PASS" in all subjects **and** a mean point score of at least *10.0* to qualify.

#GRADING SCALE REFERENCE

The system utilizes the point mapping below:

| Grade | Points | Grade | Points |
| :---  | :---   | :---  | :---   |
| **A** | 12 | **B-** | 8 |
| **A-** | 11 | **C+** | 7 |
| **B+** | 10 | **C** | 6 |
| **B** | 9 | **Other**| 0 |

# REQUIREMENTS AND INSTALLATION

### Prerequisites
* A C++ compiler (GCC, Clang, or MSVC) supporting **C++11** or higher.

### Compilation
Use the following command in your terminal to compile the program:
```bash
g++ -o admission_system main.cpp

Use the following command in your terminal to compile the program:
```bash
g++ -o admission_system main.cpp
