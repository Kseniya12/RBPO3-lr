module BPZ1901.Nezhivleva.Lab3.Task1;

namespace RBPO {
	namespace Lab3 {
		namespace Task1 {
			double f1(double x) {
				return (pow(x, 2.0) + 2.0 * x - 3 + (x + 1) * sqrt(pow(x, 2) - 9)) / (pow(x, 2.0) - 2.0 * x - 3 + (x + 1) * sqrt(pow(x, 2) - 9));
			}
			double f2(double x) {
				return (x <= 4.0) ? (sqrt(pow(x, 2.0) + 4.0)) : (cos(abs(2.0 + x)));
			}
			double a(int i) {
				return ((2 * (i + 1)) / (2 + (i + 1) * (1 - 1))) * ((i % 2) ? -1.0 : 1.0);

			}
			double f3(int n) {
				double sum = 0.0;
				for (int i = 0; i <= n; i++) {
					sum += a(i);
				}
				return sum;
			}
			double f4(double eps) {
				double pred = a(0);
				double sled = a(1);
				double sum = pred+sled;
				for (int i = 2; abs(a(i) - a(i - 1)) > eps; i++) {
					sum += a(i);
				}
				return sum;
			}
		}
	}
}
