#include "std_lib_facilities.h"

enum class Month {
    jan=1, feb=2, mar=3, apr=4, may=5, jun=6, jul=7, aug=8, sep=9, oct=10, nov=11, dec=12
};

vector<string> month_tbl = { "January", "February", "March", "April",
                             "May", "June", "July", "August", "September",
                             "October", "November", "December" };

ostream& operator<<(ostream& os, Month m)
{
    return os << month_tbl[int(m)];
}

class Date {
    int y;
    int m;
    int d;
public:
    Date(int y, int m, int d);
    void add_day(int n);
    int year() const { return y; }
    int month() const { return m; }
    int day() const { return d; }
};

Date::Date(int yy, int mm, int dd)
    :y{yy}, m{mm}, d{dd}
{
    if (d < 1 || 31 < d) error("impossible day");
    if (m < 1 || 12 < m) error("impossible day");

}

void Date::add_day(int n)
{
    d += n;
    if (d > 31) d %= 31;
}

ostream& operator<<(ostream& os, const Date& d)
{
    return os << '(' << d.year()
              << ',' << d.month()
              << ',' << d.day() << ')';
}

int main()
try {
   		Date today(1978, 6, 25);
    Date tomorrow = today;
    tomorrow.add_day(1);


    cout << today << '\n'
         << tomorrow << '\n';

}

catch(exception& e) {
    cerr << e.what() << '\n';
    return 1;
}
catch(...) {
    cerr << "unknown error" << '\n';
    return 2;
}