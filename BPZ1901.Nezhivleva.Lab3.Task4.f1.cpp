module BPZ1901.Nezhivleva.Lab3.Task4:f1;

namespace RBPO {
	namespace Lab3 {
		namespace Task4 {
			double f1(double x) {
				return (pow(x, 2.0) + 2.0 * x - 3 + (x + 1) * sqrt(pow(x, 2) - 9)) / (pow(x, 2.0) - 2.0 * x - 3 + (x + 1) * sqrt(pow(x, 2) - 9));
			}
		}
	}
}