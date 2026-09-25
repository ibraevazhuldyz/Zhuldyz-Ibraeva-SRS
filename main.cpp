#include <iostream>
#include "Patient.h"

int main() {
    double t[] = {36.6, 36.8, 37.0};

    Patient p1("Аружан", 20, "Тұмау", t, 3);

    cout << "Аты-жөні: " << p1.getName() << endl;
    cout << "Жасы: " << p1.getAge() << endl;
    cout << "Диагнозы: " << p1.getDiagnosis() << endl;
    cout << "Температурасы: " << p1.getTemp(0) << endl;

    Patient p2(p1);

    Patient p3("Али", 21, "Суық тию", t, 3);
    p3 = p1;

    if (p1 == p2)
        cout << "Пациенттер бірдей" << endl;
    else
        cout << "Пациенттер бірдей емес" << endl;

    const Patient p4(p1);
    cout << "Тұрақты объект: " << p4.getName() << endl;

    return 0;
}
