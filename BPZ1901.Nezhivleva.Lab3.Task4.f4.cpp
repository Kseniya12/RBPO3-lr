module BPZ1901.Nezhivleva.Lab3.Task4:f4;

namespace RBPO {
	namespace Lab3 {
		namespace Task4 {
			double f4(double eps) {
				double pred = a(0);
				double sled = a(1);
				double sum = pred + sled;
				int i = 2;
				do {
					sum += a(i);
					i++;
				} while (abs(a(i) - a(i - 1)) > eps);
				return sum;
			}
		}
	}
}