#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    float a,b,c,x1,x2,D,realPart,imagPart;
    cout<<"Enter coefficients of a,b,c:";
    cin>>a >>b >>c;
    D=b*b-4*a*c;

    if(D>0)
    {
        x1=(-b + sqrt(D))/(2*a);
        x2=(-b - sqrt(D))/(2*a);
        cout<< "Roots are real and different"<<"\n";
        cout<<"x1" <<x1<<"\n";
        cout<<"x2" <<x2<<"\n";

    }

    else if(D==0)
    {
        cout<<"Roots are real and same"<<"\n";
        x1=-b/(2*a);
        cout<<"x1=x2="<<x1<<"\n";

    }

    else{
             realPart = -b/(2*a);
        imagPart =sqrt(-D)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << realPart << "+" << imagPart << "i" << endl;
        cout << "x2 = " << realPart << "-" << imagPart << "i" << endl;


    }
}
