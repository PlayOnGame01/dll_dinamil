//#define FIRSTDLL_API extern "C" __declspec(dllexport)
//#include <iostream>
//#include "lib_calucaltor.h"
//using namespace std;
//
//FIRSTDLL_API int MathDll() {
//	while (true) {
//		cout << "Enter example:" << endl;
//		int num1 = 0, num2 = 0, result = 0;
//		char sign = 0;
//		cin >> num1 >> sign >> num2;
//
//		if (sign == '+') {
//			result = num1 + num2;
//		}
//		else if (sign == '/') {
//			result = num1 / num2;
//		}
//		else if (sign == '*') {
//			result = num1 * num2;
//		}
//		else if (sign == '-') {
//			result = num1 - num2;
//		}
//		cout << num1 << " " << sign << " " << num2 << " = " << result << "\n\n";
//	}
//	return 0;
//}