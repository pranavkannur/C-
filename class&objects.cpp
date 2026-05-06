#include <iostream>
using namespace std; // Important: lets us use cout and endl without std:: prefix

class student
{
private:
    double fees;

public:
    string name;
    int roll;
    string stream;
    string std;
    float cgp;

    void x(double f){
        fees= f;
    }

    double get(){
        return fees;
    }
};

int main()
{
    student pranav;
    student Nik;
    pranav.name ="pranav";
    pranav.roll= 29;
    pranav.stream="pcmb";
    pranav.std="12";
    pranav.cgp=8.3;
    Nik.name="Nik";
    pranav.x(12.4);

    cout<< pranav.name<<endl;
    cout<< Nik.name<<endl;
    cout<< pranav.get()<<endl;
    cout<< pranav.cgp<<endl;
    return 0;
}