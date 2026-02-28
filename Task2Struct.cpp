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

double MedianScore(Student std[], int n){
    double median;
    double scores[n];
    for(int i = 0; i < n; i++){
        scores[i] = std[i].score;
    }
    for(int i = 0; i < n; i++){
        double temp;
        for(int j = i + 1; j < n; j++){
            if(scores[i] > scores[j]){
                temp = scores[i];
                scores[i] = scores[j];
                scores[j] = temp;
            }
        }
    }
    if(n % 2 == 0){
        median = (scores[n/2 - 1] + scores[n/2]) / 2;
    }
    else{
        median = scores[n/2];
    }

    return median;
}

double SDScore(Student std[], int n){
    double sum = 0.0;
    double mean = AvrScore(std, n);
    for(int i = 0; i < n; i++){
        sum += (std[i].score - mean) * (std[i].score - mean);
    }
    double sd = sqrt(sum / n);
    return sd;
}

void OutGrade(Student std[], int n){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(std[i].score < std[j].score){
                Student temp = std[i];
                std[i] = std[j];
                std[j] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << "Name: " << std[i].name << " Score: " << std[i].score << " Grade: " << std[i].grade << endl;
    }
    cout << endl;
}


int main(){
    Student data[10] = {
        {"Alice", 87.5, 'A'},
        {"Bob", 78.0, 'B'},
        {"Charlie", 92.0, 'A'},
        {"David", 86.5, 'A'},
        {"Eve", 85.5, 'A'},
        {"Frank", 78.0, 'B'},
        {"Grace", 88.5, 'A'},
        {"Heidi", 88.5, 'A'},
        {"Ivan", 88.5, 'A'},
        {"Judy", 85.5, 'A'}

    };

    Student MAXSCORE = MaxStudent(data, 10);
    Student MINSCORE = MinStudent(data, 10);
    double AVRSCORE = AvrScore(data, 10);
    double MODE = ModeScore(data, 10);
    double MEDIAN = MedianScore(data, 10);
    double SD = SDScore(data, 10);
    OutGrade(data, 10);


    cout << "Max Score ->" << " Name: " << MAXSCORE.name << " Score: " << MAXSCORE.score << " Grade: " << MAXSCORE.grade << endl;
    cout << "Min Score ->" << " Name: " << MINSCORE.name << " Score: " << MINSCORE.score << " Grade: " << MINSCORE.grade << endl;
    cout << "Average Score: " << AVRSCORE << endl;
    cout << "Mode Score: " << MODE << endl;
    cout << "Median Score: " << MEDIAN << endl;
    cout << "SD Score: " << SD << endl;
    return 0;
}