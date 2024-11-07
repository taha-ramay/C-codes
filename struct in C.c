// Online C compiler to run C program online
#include <stdio.h>
int get_grade(int test, int lab);
struct data
{
    int test_Score;
    int lab_Score;
    char course_grade;
    char first_name[10];
    char second_name[10];
};
int weight_lab = 0.3;
int weight_test = 0.7;
int main()
{
    struct data s1 = {88, 70, 0, "John", "White"};
    struct data s2 = {90, 64, 0, "Alisa", "Brown"};
    struct data s3 = {88, 70, 0, "Mike", "Green"};
    s1.course_grade = get_grade(s1.test_Score, s1.lab_Score);
    s2.course_grade = get_grade(s2.test_Score, s2.lab_Score);
    s3.course_grade = get_grade(s3.test_Score, s3.lab_Score);
    // Write C code here
    printf("Try programiz.pro");
    printf("%s %s %d %d %d\n", s1.first_name, s1.second_name, s1.test_Score, s1.lab_Score, s1.course_grade);
    printf("%s %s %d %d %d\n", s2.first_name, s2.second_name, s2.test_Score, s2.lab_Score, s2.course_grade);
    printf("%s %s %d %d %d\n", s3.first_name, s3.second_name, s3.test_Score, s3.lab_Score, s3.course_grade);

    return 0;
}
int get_grade(int test, int lab)
{
    int total = (test * weight_test + lab + weight_lab);

    if (total > 80)
    {
        return 'A';
    }
    else if (total > 65)
    {
        return 'B';
    }
    else if (total > 50)
    {
        return 'C';
    }
    else
    {
        return 'F';
    }
}