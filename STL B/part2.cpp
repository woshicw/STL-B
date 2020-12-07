/*
Wei Chen
CIS 1202
12/1/2020
*/



#include <iostream>
#include <cmath>


using namespace std;
template <class Template>
Template half(Template integer);
int half(int integer);

int main()
{


    double a = 7.0;
    float b = 5.0f;
    int c = 3;



    cout << half(a) << endl;
    cout << half(b) << endl;
    cout << half(c) << endl;


    cout << endl << endl;
    system("pause");
    return 0;
}

template <class Template>
Template half(Template integer)
{

    return integer / 2;

}

int half(int integer)
{

    return round(static_cast<double>(integer) / 2);
}
