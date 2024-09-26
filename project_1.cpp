#include <iostream>
#include <cmath>

int main(){

    // Final

double highest_final_grade;
 double your_final_mark;
 double sum1;
while (true){
    std::cout << "Enter Highest Possible Mark in Final Exam\n";
    std::cin >> highest_final_grade;
if (highest_final_grade > 0 && highest_final_grade == std::round(highest_final_grade)){break;}

}
while (true){
    std::cout << "Enter your Final Exam Mark\n";
    std::cin >> your_final_mark;
if (your_final_mark >= 0 && your_final_mark <= highest_final_grade){ 
    sum1 = 100*(your_final_mark/highest_final_grade);
    break;
}
}

    // Midterm 

    double highest_midterm_grade;
    double your_midterm_mark;
    double sum2;
    while (true){
        std::cout << "Enter Highest Possible Mark in Midterm Exam\n";
        std::cin >> highest_midterm_grade;
    if (highest_midterm_grade > 0 && highest_midterm_grade == std::round(highest_midterm_grade)){break;}

    }
    while(true){
        std::cout << "Enter your midterm Exam Mark\n";
        std::cin >> your_midterm_mark;
    if (your_midterm_mark >= 0 && your_midterm_mark <= highest_midterm_grade){ 
        sum2 = 100*(your_midterm_mark/highest_midterm_grade);
        break;
    }
    }


    // Project 1

double highest_project1_grade;
 double your_project1_mark;
 double sum3;
while (true){
    std::cout << "Enter Highest Possible Mark in project 1\n";
    std::cin >> highest_project1_grade;
    if (highest_project1_grade > 0 && highest_project1_grade == std::round(highest_project1_grade)){break;}
}
while(true){
    std::cout << "Enter your project 1 Mark\n";
    std::cin >> your_project1_mark;
if (your_project1_mark >= 0 && your_project1_mark <= highest_project1_grade){ 
    sum3 = 100*(your_project1_mark/highest_project1_grade);
    break;
}
}

    // Project 2

    double highest_project2_grade;
    double your_project2_mark;
    double sum4;
    while (true){
        std::cout << "Enter Highest Possible Mark in project 2\n";
        std::cin >> highest_project2_grade;
        if (highest_project2_grade > 0 && highest_project2_grade == std::round(highest_project2_grade)){break;}
    }
    while(true){
        std::cout << "Enter your project 2 Mark\n";
        std::cin >> your_project2_mark;
    if (your_project2_mark >= 0 && your_project2_mark <= highest_project2_grade){ 
        sum4 = 100*(your_project2_mark/highest_project2_grade);
        break;
    }
    }

    // Project 3

double highest_project3_grade;
 double your_project3_mark;
 double sum5;
while (true){
    std::cout << "Enter Highest Possible Mark in project 3\n";
    std::cin >> highest_project3_grade;
    if (highest_project3_grade > 0 && highest_project3_grade == std::round(highest_project3_grade)){break;}
}
while(true){
    std::cout << "Enter your project 3 Mark\n";
    std::cin >> your_project3_mark;
if (your_project3_mark >= 0 && your_project3_mark <= highest_project3_grade){ 
    sum5 = 100*(your_project3_mark/highest_project3_grade);
    break;
}
}

    // Project 4

    double highest_project4_grade;
    double your_project4_mark;
    double sum6;
    while (true){
        std::cout << "Enter Highest Possible Mark in project 4\n";
        std::cin >> highest_project4_grade;
        if (highest_project4_grade > 0 && highest_project4_grade == std::round(highest_project4_grade)){break;}
    }
    while(true){
        std::cout << "Enter your project 4 Mark\n";
        std::cin >> your_project4_mark;
    if (your_project4_mark >= 0 && your_project4_mark <= highest_project4_grade){ 
        sum6 = 100*(your_project4_mark/highest_project4_grade);
        break;
    }
    }

    //Project 5

double highest_project5_grade;
 double your_project5_mark;
 double sum7;
while (true){
    std::cout << "Enter Highest Possible Mark in project 5\n";
    std::cin >> highest_project5_grade;
    if (highest_project5_grade > 0 && highest_project5_grade == std::round(highest_project5_grade)){break;}
}
while(true){
    std::cout << "Enter your project 5 Mark\n";
    std::cin >> your_project5_mark;
if (your_project5_mark >= 0 && your_project5_mark <= highest_project5_grade){ 
    sum7 = 100*(your_project5_mark/highest_project5_grade);
    break;
}
}

if (sum2 < sum1) sum2 = sum1;
if (sum3 < sum1) sum3 = sum1;
if (sum4 < sum1) sum4 = sum1;
if (sum5 < sum1) sum5 = sum1;
if (sum6 < sum1) sum6 = sum1;
if (sum7 < sum1) sum7 = sum1;

// Exam 

double exam;
exam = 0.75*sum1+0.25*sum2;

// Project 

double project;
project = 0.2*sum3+0.2*sum4+0.2*sum5+0.2*sum6+0.2*sum7;

    // Weighting

double x;

if (exam <= 40){
    x = exam;
} else if (exam > 40 && exam < 60){
    x = ((-1.0/60.0)*pow(exam,2))+((5.0/3.0)*exam)+((1.0/60.0)*exam*project)-((2.0/3.0)*project);
} else {
    x = ((2.0/3.0)*exam)+((1.0/3.0)*project);
}
x = std::round(x);
std::cout << "Final grade: " << x << std::endl;
 return 0;
}