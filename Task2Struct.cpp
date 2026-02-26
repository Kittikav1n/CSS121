#include<iostream>
using namespace std;
typedef struct Student{
    string name;
    double score;
    char grade;
} Student;

Student MaxStudent(Student std[], int n){
    Student maxStd = std[0];
    for(int i = 1; i < n; i++){
        if(std[i].score > maxStd.score){
            maxStd = std[i];
        }
    }
    return maxStd;
}

Student MinStudent(Student std[], int n){
    Student minStd = std[0];
    for(int i = 1; i < n; i++){
        if(std[i].score < minStd.score){
            minStd = std[i];
        }
    }
    return minStd;
}

double AvrScore(Student std[], int n){
    double sum = 0.0;
    for(int i = 0; i < n; i++){
        sum += std[i].score;
    }
    sum /= n;
    return sum;
}

int main(){
    Student data[5] = {
        {"Alice", 85.5, 'A'},
        {"Bob", 78.0, 'B'},
        {"Charlie", 92.0, 'A'},
        {"David", 88.5, 'A'},
        {"Eve", 80.0, 'B'}
    };
    Student MAXSCORE = MaxStudent(data, 5);
    Student MINSCORE = MinStudent(data, 5);
    double AVRSCORE = AvrScore(data, 5);
    cout << "Name: " << MAXSCORE.name << " Score: " << MAXSCORE.score << " Grade: " << MAXSCORE.grade << endl;
    cout << "Name: " << MINSCORE.name << " Score: " << MINSCORE.score << " Grade: " << MINSCORE.grade << endl;
    return 0;
}