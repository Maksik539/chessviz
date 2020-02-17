#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
using namespace std;
struct figure {
    vector<string> name;
    vector<double> x;
    vector<double> y;
    vector<double> r;
    vector<double> perimetr;
    vector<double> area;
};
int MyAtoi(char a[])
{
    int s = 0;
    int al = strlen(a);
    int k = 1;
    for (int i = 0; i < al - 1; i++) {
        k *= 10;
    }
    for (i = 0; a[i] != 0; i++) {
        s += (a[i] - '0') * k;
        k /= 10;
    }
    return s;
}
void get_figure()
{
    string com, num;
    int k = 0;
    cin >> com;
    if
        com.find("circle")
        {
            figure.name.push_back("circle");
            k += 7;
            for (int i = 0; i < com.length(); i++) {
                if (com[k + 1] != ' ' || com[k + 1] != ',') {
                    num[ ] = com[k];
		   																		
                }
            }
        }
    cout << figure.name[0] << endl;
}
int main()
{
    get_figure();
}
