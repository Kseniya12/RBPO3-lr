module BPZ1901.Nezhivleva.Lab3.Task3;

namespace RBPO {
	namespace Lab3 {
		namespace Task3 {
			double f3(int n) {
				double sum = 0.0;
				int i = 0;
				do {
					sum += a(i);
					i++;
				} while (i <= n);
				return sum;
			}
		}
	}
}