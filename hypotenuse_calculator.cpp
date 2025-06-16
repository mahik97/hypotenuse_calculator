#include <iostream>
#include <cmath>
using namespace std;

    int main () {

        // Hypotenuse of a right angled trinagle calculator

        double a;
        double b;
        double x;
        double y;
        double sum;
        double c;
        
        cout << "Enter the value of a: ";
        cin >> a;

        cout << "Enter the value of b: ";
        cin >> b;

        x = pow(a,2);
        y = pow(b,2);
        sum = x + y;

        c = sqrt(sum);

        cout << "The hypotenuse is " << c << " cm";
        

        return 0;
    }