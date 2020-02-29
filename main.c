#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
using namespace std;
struct data_figure {
    vector<string> name;
    vector<double> x;
    vector<double> y;
    vector<double> r;
    vector<double> perimetr;
    vector<double> area;
} figure;
int get_num(string com, int k)
{
    string num;
    for (long unsigned int i = k; i < com.length(); i++) {
        if (com[i] != ' ' && com[i] != ',') {
            num += com[i];
        }
    }
    return stoi(num);
}
void get_figure()
{
    string com;
    getline(cin, com);
    cout << com << endl;
    if (com.find("circle") != -1) {
        figure.name.push_back("circle");
        figure.x.push_back(get_num(com, 7));
    }
}

int main()
{
    get_figure();
}
