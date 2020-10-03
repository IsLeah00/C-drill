#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;

int main()
{
	cout << "Please enter some values in: cm, m, ft, in: " << endl;
	const double cm = 100;
	const double in = 39.4;
	const double ft = 3.28;
	const double m = 1;
string unit = "";

double smallest = 1.0/0.0;
double largest = -1.0/0.0;


int count = 0;
double sum = 0;
double num = 0;
double meter = 0;
vector<double>converted;


while (cin>>num>>unit) {
if (unit == " ") {
		double meter = num;
		cout<<num<<" = "<<num<<"m"<<endl;
		sum+=meter;
		++count;
		converted.push_back(meter);
	}

else if (unit == "cm") {
		double meter = num/cm;
		cout<<num<<"cm = "<<meter<<"m"<<endl;
		sum+=meter;
		++count;
		converted.push_back(meter);
	}

else if (unit == "in") {
		double meter = num/in;
		cout<<num<<"in = "<<meter<<"m"<<endl;
		sum+=meter;
		++count;
		converted.push_back(meter);
	}

else if (unit == "ft") {
		double meter = num/ft;
		cout<<num<<"ft = "<<meter<<"m"<<endl;
		sum+=meter;
		++count;
		converted.push_back(meter);
}

else if (unit == "m") {
		double meter = num/m;
		cout<<num<<"m = "<<meter<<"m"<<endl;
		sum+=meter;
		++count;
		converted.push_back(meter);
}

else {
	cout<<"Invalid unit."<<endl;
}

{
	smallest = min(smallest, num);
	largest = max(largest, num);

if (smallest) {
cout << smallest << " is the smallest value entered so far." <<endl;
}
if (largest) {
cout << largest << " is the largest value entered so far." <<endl;
}

}

}

cout << "The largest value: " <<largest<<endl;
cout << "The smallest value: " <<smallest<<endl;
cout << "The sum of values: "<<sum<<endl;
cout << "The number of values: "<<count<<endl;

cout << "The values in order: \n";
sort(converted.begin(),converted.end());

for(int i = 0; i < converted.size(); ++i) {
	cout<<converted[i]<<" "<<endl; }

return 0;

}