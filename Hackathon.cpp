/*  Author: Sebastian Matthews
    Hackathon 2021
    October 16, 2021
    Gonzaga University
    
*/

#include <iostream>
#include <cmath>
using namespace std;

const double g = -9.8;

int main(){
    int angle, velocity;
    double vertical_final, horizontal_final, time_in_air;
    cin >> angle;
    cin >> velocity;
    time_in_air = (-2/g) * (velocity * sin(angle));
    vertical_final = velocity * sin(angle)*(time_in_air) + (.5 * g) * pow(2, time_in_air);
    horizontal_final= (velocity * cos(angle)) * (time_in_air);
    cout << vertical_final << endl;
    cout << horizontal_final << endl;
    return horizontal_final;
}