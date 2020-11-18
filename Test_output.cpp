#include "std_lib_facilities.h"

int main()
try
{
int birth_year = 2000;


cout << "decimal\t\t" << birth_year << '\n' << hex
         << "hexadecimal\t" << birth_year << '\n' << oct
         << "octal\t\t" << birth_year << '\n';

    cout << "My age: " << dec << 20 << "\n\n";


cout 
	<< '|' << setw(8) << "Mezei " << '|' << setw(8) << "Kornélia"
    << '|' << setw(24) << "\t06307248755 "
    << '|' << setw(16) << " mezei.kornelia@gmail.com " << "\t|\n"
	<< '|' << setw(8) << "Mazsu " << '|' << setw(8) << "Réka\t  "
	<< '|' << setw(24) << "\t06309477254 "
    << '|' << setw(16) << " mazsu.reka@gmail.com " << "\t|\n"
    << '|' << setw(8) << "Kiss " << '|' << setw(8) << "Gyula "
    << '|' << setw(24) << "\t06705279526 "
    << '|' << setw(16) << " kiss.gyula@gmail.com " << "\t|\n"
    << '|' << setw(8) << "Nagy " << '|' << setw(8) << "Attila "
    << '|' << setw(24) << "\t06305321367 "
    << '|' << setw(16) << " nagy.attila@gmail.com " << "\t|\n"
    << '|' << setw(8) << "Koszta " << '|' << setw(8) << "Vivien "
    << '|' << setw(24) << "\t06707830269 "
    << '|' << setw(16) << " koszta.vivien@gmail.com " << "\t|\n"
    << '|' << setw(8) << "Jock " << '|' << setw(8) << "Evelin "
    << '|' << setw(24) << "\t06302945632 "
    << '|' << setw(16) << " jock.evelin@gmail.com " << "\t|\n";

}






catch(exception& e) {
    cerr << "Error: " << e.what() << '\n';
    return 1;
}
catch(...) {
    cerr << "Something troubling occurred..\n";
    return 2;
}