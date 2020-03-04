#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <cmath>
const double PI = 3.1415926535;

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
void out_figure()
{
	double a,b,c;
	for (int k = 0; k < figure.name.size();k++) {
		cout<<k+1<<". "<< figure.name[k]<<"("<< figure.x[k]<<", "<< figure.y[k]<<", "<< figure.r[k]<<")"<<endl;
		b = 2 * PI * figure.r[k];
		cout<< "perimeter =" << b;
		cout << endl;
		c = PI * pow(figure.r[k], 2);
		cout << "area =" << c<<endl;
		cout << "intersects:" << endl;
		for (int j = 0; j < figure.name.size(); j++) {
			if (k != j) {
				a =sqrt(pow(figure.x[j] - figure.x[k], 2) + pow(figure.y[j] - figure.y[k], 2));
				if (figure.r[k] + figure.r[j] >= a)
					cout <<j+1<<". "<< figure.name[j]<<endl;
			}
		}
		cout << endl;
	}
}
int q = 0;
int get_num(string com)
{
	string num = "";
	for (int i = q; i < com.length(); i++) {
		if ((com[i] == ' ') || (com[i] == ',') || (com[i] == ')')) {
			break;
		}
		else {
			num += com[i];
			q++;
		}
	}
	q += 2;
	return stoi(num);
}
void get_figure()
{
	string com;
	while (com.find("stop")) {
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
		q = 0;
	}
}


int main()
{
	get_figure();
	out_figure();

}
