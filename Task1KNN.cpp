#include<iostream>
#include<cmath>

using namespace std;
typedef struct Data{
    double x;
    double y;
    char group;
    double distance;
} Data;

int main(){
    Data friends[5] = {
        {1.0, 2.0, 'A', 0.0},
        {3.0, 4.0, 'B', 0.0},
        {5.0, 6.0, 'B', 0.0},
        {7.0, 8.0, 'A', 0.0},
        {9.0, 10.0, 'B', 0.0}
    };

    double targetX = 2.0;
    double targetY = 3.5;

    int K = 3;

    for(int i = 0; i < 5; i++){
        // สูตร: sqrt((x1-x2)^2 + (y1-y2)^2)
        friends[i].distance = sqrt(pow(friends[i].x -targetX, 2) + pow(friends[i].y - targetY, 2));
    }

    int VOTE_A = 0;
    int VOTE_B = 0;

    for(int i = 0; i < K; i++){
        cout << "คนที่: " << i+1 << " Group: " << friends[i].group << " Distance: " << friends[i].distance << endl;
        if(friends[i].group == 'A'){
            VOTE_A++;
        }else if (friends[i].group == 'B'){
            VOTE_B++;
        }
    }

    cout << "Vote A: " << VOTE_A << endl;
    cout << "Vote B: " << VOTE_B << endl;

    if (VOTE_A > VOTE_B)
    {
        cout << "A ชนะ" << endl;
    }else if (VOTE_A < VOTE_B)
    {
        cout << "B ชนะ" << endl;
    }
    return 0;
}