export module BPZ1901.Nezhivleva.Lab3.Task5;

import <cmath>;

export namespace RBPO {
	namespace Lab3 {
		namespace Task5 {
			double f1(double x);
			double f2(double x);
			double a(int i);
			double f3(int n);
			double f4(double eps);
		}
	}
}

module:private;
double RBPO::Lab3::Task5::f1(double x) {
	return (pow(x, 2.0) + 2.0 * x - 3 + (x + 1) * sqrt(pow(x, 2) - 9)) / (pow(x, 2.0) - 2.0 * x - 3 + (x + 1) * sqrt(pow(x, 2) - 9));
}
double RBPO::Lab3::Task5::f2(double x) {
	if (x <= 4.0) return (sqrt(pow(x, 2.0) + 4.0));
	else return cos(abs(2.0 + x));

}
double RBPO::Lab3::Task5::a(int i) {
	return ((2 * (i + 1)) / (2 + (i + 1) * (1 - 1))) * ((i % 2) ? -1.0 : 1.0);

}
double RBPO::Lab3::Task5::f3(int n) {
	double sum = 0.0;
	for (int i = 0; i <= n; i++) {
		sum += a(i);
	}
	return sum;
}
double RBPO::Lab3::Task5::f4(double eps) {
	double prev = a(0);
	double next = a(1);
	double sum = prev + next;
	for (int i = 2; abs(a(i) - a(i - 1)) > eps; i++) {
		sum += a(i);
	}
	return sum;
}