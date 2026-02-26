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

double ModeScore(Student std[], int n){
    double mode = std[0].score;
    int all = 0;
    for(int i = 0; i < n; i++){
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if(std[i].score == std[j].score){
                count++;
            }
        }
        if(count > all){
            all = count;
            mode = std[i].score;
        }
        
    }
    return mode;
}

int main(){
    Student data[10] = {
        {"Alice", 87.5, 'A'},
        {"Bob", 78.0, 'B'},
        {"Charlie", 92.0, 'A'},
        {"David", 86.5, 'A'},
        {"Eve", 85.5, 'B'},
        {"Frank", 78.0, 'B'},
        {"Grace", 88.5, 'A'},
        {"Heidi", 88.5, 'B'},
        {"Ivan", 88.5, 'A'},
        {"Judy", 85.5, 'B'}

    };
    Student MAXSCORE = MaxStudent(data, 10);
    Student MINSCORE = MinStudent(data, 10);
    double AVRSCORE = AvrScore(data, 10);
    double MODE = ModeScore(data, 10);

    cout << "Name: " << MAXSCORE.name << " Score: " << MAXSCORE.score << " Grade: " << MAXSCORE.grade << endl;
    cout << "Name: " << MINSCORE.name << " Score: " << MINSCORE.score << " Grade: " << MINSCORE.grade << endl;
    cout << "Average Score: " << AVRSCORE << endl;
    cout << "Mode Score: " << MODE << endl;
    return 0;
}