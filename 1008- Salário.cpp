#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 int n_fun;
 int n_horas;
 double v_hora;
 cin >> n_fun >> n_horas >> v_hora;
 double salario = n_horas*v_hora;
 
 cout << "NUMBER = " << n_fun << endl;
 cout << "SALARY = U$ "  << fixed << setprecision(2) << salario << endl;
 
     return 0;
}