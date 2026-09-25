#include <iostream>
#include <string>
using namespace std;

class Patient {
private:
    string name;
    int age;
    string diagnosis;
    double* temp;
    int size;

public:
    Patient(string n, int a, string d, double* t, int s);
    Patient(const Patient& p);
    ~Patient();

    string getName() const;
    int getAge() const;
    string getDiagnosis() const;
    double getTemp(int i) const;

    void setName(string n);
    void setAge(int a);
    void setDiagnosis(string d);

    Patient& operator=(const Patient& p);
    bool operator==(const Patient& p) const;
};
