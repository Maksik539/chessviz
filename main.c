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
void out_figure(int k)
{
    cout << figure.name[k] << endl;
    cout << figure.x[k] << endl;
    cout << figure.y[k] << endl;
    cout << figure.r[k] << endl;
}
int q = 0;
int get_num(string com)
{
    string num = "";
    for (int i = q; i < com.length(); i++) {
        if ((com[i] == ' ') || (com[i] == ',')|| (com[i] == ')')) {
            break;
        } else {
            num += com[i];
            q++;
        }
    }
    q+=2;
    return stoi(num);
}
void get_figure()
{
    string com;
    getline(cin, com);
    if (com.find("circle") != -1) {
        figure.name.push_back("circle");
        q = 7;
        figure.x.push_back(get_num(com));
        //out_figure(0);
        figure.y.push_back(get_num(com));
		//out_figure(0);
        figure.r.push_back(get_num(com));
    }
	q=0;
}

int main()
{
get_figure();
out_figure(0);
}
