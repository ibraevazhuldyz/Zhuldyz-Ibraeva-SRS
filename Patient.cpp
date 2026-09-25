#include "Patient.h"

Patient::Patient(string n, int a, string d, double* t, int s) {
    
this->name = n;
    this->age = a;
    this->diagnosis = d;
    this->size = s;

    this->temp = new double[size];

    for (int i = 0; i < size; i++)
        this->temp[i] = t[i];
}

Patient::Patient(const Patient& p) {
    name = p.name;
    age = p.age;
    diagnosis = p.diagnosis;
    size = p.size;

    temp = new double[size];

    for (int i = 0; i < size; i++)
        temp[i] = p.temp[i];
}

Patient::~Patient() {
    delete[] temp;
}

string Patient::getName() const {
    return name;
}

int Patient::getAge() const {
    return age;
}

string Patient::getDiagnosis() const {
    return diagnosis;
}

double Patient::getTemp(int i) const {
    return temp[i];
}

void Patient::setName(string n) {
    name = n;
}

void Patient::setAge(int a) {
    age = a;
}

void Patient::setDiagnosis(string d) {
    diagnosis = d;
}

Patient& Patient::operator=(const Patient& p) {
    if (this != &p) {
        name = p.name;
        age = p.age;
        diagnosis = p.diagnosis;

        delete[] temp;

        size = p.size;
        temp = new double[size];

        for (int i = 0; i < size; i++)
            temp[i] = p.temp[i];
    }

    return *this;
}

bool Patient::operator==(const Patient& p) const {
    return name == p.name && age == p.age;
}
