#include <iostream>
#include <cmath> //Using math library only for "fractional" power. 
using namespace std;

double power_int(double p, int q) {     // Function only for integral powers.
    int d=p;
    for (int i=0; i<q-1; i++) {
        p = p*d;
    }
    return p;
}

int factorial(int x) {
    long long f = 1;
    for (long long i=1; i<=x; i++) {
        f *= i;
    }
    return f;
}
// I tried to programme for fractional index, but I'm not able to find error.

//double power(double m, double n) {
//    for (int i=0; i<100; i++) {
//        double u;
//        double t;
//        for (int j=0; j<i; j++) {
//            t=1;
//            t = t*(t-j+1)*power1((m-1), i)/factorial(i);
//        }
//        u = u+t;
//        if (u-t < 0.0001) {
//            return u;
//            break;
//        }
//    }
//}


double root(double r) {
    if (r>=0) {
        for (double i=0; i<r; i=i+0.01) {
            if (r-i*i < 0.00001) {
                return i;
                break;
            }
        }
    }
    else {
        cout << "ERROR!!! Please enter positive number and try again." << endl;
    }
}

double log_10(double a) {
    if (a>0) {
        for(double i=0; ; i=i+0.01) {
            if (a-pow(10, i)<0.0001) {
                return i;
                break;
            }
        }
    }
}

double log_e(double a) {
    if (a>0) {
        for(double i=0; ; i=i+0.01) {
            if (a-pow(exp(1.0), i)<0.0001) {
                return i;
                break;
            }
        }
    }
}





int main() {
    char x;
    cout << endl << endl << "This is an Advanced Calculator." << endl << endl;
    cout << "Enter any of the followiing operations here (select the letter code); " << endl << 
    "(+, -, *, /, r (sqrt), L (ln), l (log), e (exp), p (a^b)): "; 
    cin >> x;
    cout << endl;
    double a, b;
        if (x == '+' || x == '-' || x == '*' || x=='/' || x=='r' || x=='L' || x=='l' || x=='e' || x=='p') {
        
        if (x == '+' || x=='-' || x=='*' || x=='/' || x=='p') {
        cout << "Enter first number (a): ";
        cin >> a;
        cout << "Enter second number (b): ";
        cin >> b;
        if (x == '+') {
            cout << "Answer = " << a + b << endl;
        }
        if (x == '-') {
            cout << "Answer = " << a - b << endl;
        }
        if (x == '*') {
            cout << "Answer = " << a*b << endl;
        }
        if (x == '/' && b!=0) {
            cout << "Answer = " << a/b << endl;
        }
        if (x == '/' && b==0) {
            cout << "ERROR!!!" << endl << "You can't divide a number by 0, kindly start again.";
        }
        if (x == 'p') {
          cout << "Answer = " << pow(a, b);
            
        }
        }
        if (x == 'r' || x=='L' || x=='l' || x=='e') {
          double a;
          cout << "Enter the number: ";
          cin >> a;
          cout << endl;
          if (x=='r' && a>=0) {
                cout << "Answer = " << root(a);
         }
          if (x=='l' && a>0) {
              cout << "Answer = " << log_10(a);
          }
          if (x=='L' && a>0) {
              cout << "Answer = " << log_e(a);
          }
          if (x=='e') {
              cout << "Answer = " << exp(a);
          }
        }
        }
        else {
            cout << "ERROR!!!" << "Kindly start again and selct correct operation code letter. " << endl;
        }
        cout << endl << endl << "Thank You for using!!!" << endl;
        cout << "Made by Teerth Dudhagara";
    return 0;
}
