#include <bits/stdc++.h>
using namespace std;
ifstream fin("egale.in");
ofstream fout("egale.out");
int main() 
{
    int op;
    fin >> op;
    assert(op == 1 || op == 2);
    if (op == 1) {
        long long a, b;
        fin >> a >> b;
        assert(a <= b);
        long long curr = 1;
        while (curr <= b) {
            for (int i = 1; i <= 9; ++i)
                if (a <= i*curr && i*curr <= b)
                    fout << i*curr << " ";
            curr = curr*10 + 1;
        }
        fout << "\n";
    }
    else {
        int x;
        fin >> x;
        assert(x <= 100);
        for (int nrCif = 1; nrCif <= x; ++nrCif) {
            for (int cif = 1; cif <= 9; ++cif) {
                for (int i = 1; i <= nrCif; ++i)
                    fout << cif;
                fout << " ";
            }
        }
        fout << "\n";
    }
    return 0;
}