#pragma once
#include<cmath>
#include <iostream>

namespace m4ths::con {
	double pi = 3.14159265;
	double e = 2.7182818284;
	class calc {
	public:
		static double pi() { // Machin计算pi
			return 
				(
					16.0 * atan(1.0 / 5.0) -
					4 * atan(1.0 / 239.0)
					);
		}
		static double e() { // Taylor展开计算e
			double e = 1.0;
			double fact = 1.0;

			for (int n = 1; n <= 100; n++) {
				fact *= n;
				e += 1.0 / fact;
			}
			return e;
		}
	};
}