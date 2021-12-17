#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string>

using namespace std;

int main(){
    double num = 0,mean,std,z = 0,zpow = 0;
    string datainline;
    ifstream source("score.txt");

    while(getline(source, datainline)){
        z += atof(datainline.c_str());
        zpow += pow(atof(datainline.c_str()),2);
        num++;
    }

    mean = (1/num)*z;
    std = sqrt((1.0/num*zpow) - pow(mean,2));

    cout << "Number of data = " << num << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << std << endl;

    source.close();
}
