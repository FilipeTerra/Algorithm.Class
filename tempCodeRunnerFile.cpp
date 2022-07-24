#include <iostream>
#include <string>

using namespace std;

int main()  {

vector <int> dados = {};
int v = 0;
int i = 0;

while (v >= 0) {
    cout << "Digite o " << i+1 << "-ésimo número (-1 para terminar): ";
    cin >> v;

if (v < 0) break;

dados.push_back(v);
}

for (int x : dados)
cout << x << endl;

return 0;

}