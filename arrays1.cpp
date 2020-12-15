#include "std_lib_facilities.h"

void print_array10(ostream& os, int* a) {
    for (int i = 0; i<10; ++i)
        os << a[i] << "\n";
}

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

    int* ip = new int[10];




    for (int i = 0; i<10; ++i)
        cout << ip[i] << "\n";

    delete[] ip;




    int* ip2 = new int[10];
    for (int i = 0; i<10; ++i)
        ip2[i] = 100 + i;
    print_array10(cout,ip2);
    delete[] ip2;




    int* ip3 = new int[11];
    for (int i = 0; i<11; ++i)
        ip3[i] = 100 + i;
    print_array10(cout,ip3);
    cout << ip3[10] << "\n";
    delete[] ip3;





    int* ip4 = new int[20];
    for (int i = 0; i<20; ++i)
        ip4[i] = 100 + i;
    print_array(cout,ip4,20);
    delete[] ip4;





    vector<int> v;
    for (int i = 0; i<10; ++i)
        v.push_back(100+i);
    print_vector(cout,v);

    cout << "\n";
    vector<int> v2;
    for (int i = 0; i<11; ++i)
        v2.push_back(100+i);
    print_vector(cout,v2);

    cout << "\n";
    vector<int> v3;
    for (int i = 0; i<20; ++i)
        v3.push_back(100+i);
    print_vector(cout,v3);
}
catch(exception& e) {
    cerr << "Exception: " << e.what() << '\n';
    return 1;
}
catch(...) {
    cerr << "Unknown exception\n";
    return 2;
}