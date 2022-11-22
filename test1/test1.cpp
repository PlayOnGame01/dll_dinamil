#include <Windows.h>
#include <tchar.h>
#include <iostream>
using namespace std;

typedef int (*fptr) ();

//int Sum(int a, double b)
//{
//    return a + b;
//}

int main()
{
    /*  int (*ptr)(int, double) = Sum;
      cout << ptr(12, 4.6) << endl;*/

    HINSTANCE hInstLib = LoadLibrary(TEXT("MyLib.dll")); // !!!

    if (hInstLib == NULL)
    {
        cout << "Can`t load library MyLib.dll" << endl;
        return 0;
    }
    fptr fooInDll = (fptr)GetProcAddress(hInstLib, "fooInDll");
    if (fooInDll == NULL)
    {
        cout << "Can`t load function fooInDll" << endl;
    }
    else
    {
        cout << "fooInDll: " << fooInDll() << endl;
    }
    const double* pPi = (const double*)GetProcAddress(hInstLib, "Pi");
    cout << "Pi: " << *pPi << endl;

    FreeLibrary(hInstLib);  


    /* const double* pP= (const double*)GetProcAddress(hInstLib, "Pi");
     cout << "Pi: " << *pP << endl;*/
}
