#include "std_lib_facilities.h"


void print_array(ostream& os, int* a, int n) {
    for (int i = 0; i<n; ++i)
        os << a[i] << "\n";
}

void print_vector(ostream& os, vector<int> v) {
    for (int i = 0; i<v.size(); ++i)
        os << v[i] << "\n";
}


int main()
try {


    int i1 = 7;
    int* p1 = &i1;


    cout << "p1: " << p1 << "\n";
    cout << "*p1: " << *p1 << "\n";



    int* p2 = new int[7];
    for (int i = 0; i<7; ++i)
        p2[i] = pow(2,i);


    cout << "p2: " << p2 << "\n";
    cout << "print_array(cout,p2,7):\n";
    print_array(cout,p2,7);


    int* p3 = p2;


    p2 = p1;


    p2 = p3;


    cout << "p1: " << p1 << "\n";
    cout << "*p1: " << *p1 << "\n";
    cout << "p2: " << p2 << "\n";
    cout << "*p2: " << *p2 << "\n";


    delete[] p2;
    p3 = 0;



    p1 = new int[10];
    for (int i = 0; i<10; ++i)
        p1[i] = pow(2,i);

    p2 = new int[10];
    for (int i = 0; i<10; ++i)
        p2[i] = p1[i];

    print_array(cout,p2,10);




    vector<int> vec1;
    for (int i = 0; i<10; ++i)
        vec1.push_back(pow(2,i));
    vector<int> vec2;
    for (int i = 0; i<vec1.size(); ++i)
        vec2.push_back(vec1[i]);
    print_vector(cout,vec2);
}


catch(exception& e) {
    cerr << "Exception: " << e.what() << '\n';
    return 1;
}
catch(...) {
    cerr << "Unknown exception\n";
    return 2;
}