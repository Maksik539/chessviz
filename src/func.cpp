#include "func.h"
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <vector>
using namespace std;

struct data_figure {
    vector<string> name;
    vector<double> x;
    vector<double> y;
    vector<double> r;
    vector<double> p;
    vector<double> perimetr;
    vector<double> area;
} figure;

float perimeters(float r)
{
    if (r < 0)
        r *= -1;
    if (r == 0) {
        printf("error");
        return 0;
    }
    float perimetr = 3.14 * r * 2;
    return perimetr;
}

float areas(float r)
{
    if (r < 0)
        r *= -1;
    if (r == 0) {
        printf("error");
        return 0;
    }
    float ar = 3.14 * r * r;
    return ar;
}

void out_figure()
{
    double a, b, c, h;
    h = figure.name.size();
    for (int k = 0; k < h; k++) {
        cout << k + 1 << ". " << figure.name[k] << "(" << figure.x[k] << ", "
             << figure.y[k] << ", " << figure.r[k] << ")" << endl;
        b = perimeters(figure.r[k]);
        cout << "perimeter =" << b;
        cout << endl;
        c = areas(figure.r[k]);
        cout << "area =" << c << endl;
        cout << "intersects:" << endl;
        for (int j = 0; j < h; j++) {
            if (k != j) {
                a
                        = sqrt(pow(figure.x[j] - figure.x[k], 2)
                               + pow(figure.y[j] - figure.y[k], 2));
                if (figure.r[k] + figure.r[j] >= a)
                    cout << j + 1 << ". " << figure.name[j] << endl;
            }
        }
        cout << endl;
    }
}

int get_num(string com, int pos, int start_pos)
{
    double e;
    e = com.length();
    string num = "";
    int q = start_pos;
    for (int j = 0; j <= pos; j++) {
        num = "";
        for (int i = q; i < e; i++) {
            if ((com[i] == ' ') || (com[i] == ',') || (com[i] == ')')) {
                break;
            } else {
                num += com[i];
                q++;
            }
        }
        q += 2;
    }
    return stoi(num);
}
int proverka(string com)
{
    size_t npos = -1;
    if (com.find("circle") != npos) {
        return 1;
    } else
        return -1;
}
void get_figure()
{
    size_t npos = -1;
    int a = 0;
    string com;
    while (com.find("stop")) {
        getline(cin, com);
        a = proverka(com);
        if (a != npos) {
            figure.name.push_back("circle");
            // q = 7;
            figure.x.push_back(get_num(com, 0, 7));
            // out_figure(0);
            figure.y.push_back(get_num(com, 1, 7));
            // out_figure(0);
            figure.r.push_back(get_num(com, 2, 7));
        } else {
            cout << endl << "Incorrect entry!Enter again:";
            getline(cin, com);
        }
        // q = 0;
    }
    cout << endl;
}
