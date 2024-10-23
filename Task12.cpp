#include <iostream>

double myAbs(double x) {
    return x>=0 ? x : -x;
}

double mySqrt(double x) {
    const double eps = 1e-15;
    double result = x;
    double xn = 0;
    while (myAbs(result - xn) > eps) {
        xn = result;
        result = (xn + x / xn) / 2;
    } 
    return result;
}

int main(){
    double a = 0, b = 0, c = 0;
    std::cout << " Input a , b , c in ax^4 + bx^3 + cx^2 + bx + a = 0;";
    std::cin >> a >> b >> c;

    double dis = b*b - 4*a*c;
    if( dis > 0 ){
       double disSqrt = mySqrt(dis); 
    }

    if(dis < 0 ){
        std::cout << " dis = 0 ";
        return 0;
    }else{
        if(dis == 0 ){
            double t1 = -b / (2*a);
            if ( t1 < 0){
                std::cout << " t = 0 ";
                return 0;
            }else{
                double x1 = mySqrt(t1);
                double x2 = -mySqrt(t1);
                std::cout << "x1 - " << x1 << " x2 - " << x2;
            }
        }else{
            double t2 = (-b + mySqrt(dis) )/ (2*a);
            double t3 = (-b - mySqrt(dis) )/ (2*a);
            if( t2 < 0){
                std::cout << " ERROR ";
                return 0;
            }else{
                double x3 = mySqrt(t2);
                double x4 = -mySqrt(t2);
                std::cout << " x1 - " << x3 << " x2 - " << x4;
            }
            if( t3 < 0){
                std::cout << " ERROR ";
                return 0;
            }else{
                double x5 = mySqrt(t3);
                double x6 = -mySqrt(t3);
                std::cout << "x3 = " << x5 << " x4 = " << x6;
            }   
        }
    }
    return 0;
}