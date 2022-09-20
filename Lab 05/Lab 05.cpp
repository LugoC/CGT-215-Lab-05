

#include <iostream>
#include <string>

using namespace std;


void Translate(string &normal, int L) {
    int Val;
    int Pos;
    char Lower;
    char Cypher[26] = { 'V', 'F', 'X', 'B', 'L', 'I', 'T', 'Z', 'J', 'R', 'P', 'H', 'D', 'K', 'N', 'O', 'W', 'S', 'G', 'U', 'Y', 'Q', 'M', 'A', 'C', 'E' };
    char cypher[26] = { 'v', 'f', 'x', 'b', 'l', 'i', 't', 'z', 'j', 'r', 'p', 'h', 'd', 'k', 'n', 'o', 'w', 's', 'g', 'u', 'y', 'q', 'm', 'a', 'c', 'e' };
    for (int i = 0; i < L; i++) {
        Val = normal[i];
        if (Val > 64 && Val < 91) {
            cout << Cypher[Val - 65];
        }
        else if (Val > 96 && Val < 123) {
            Lower = Val - 32;
            cout << cypher[Lower - 65];
        }
        else {
            cout << normal[i];
        }
    }
}
int main()
{
    int L;
    string normal;
    std::string;
    cout << "Input text to cypher: ";
    getline(cin, normal);
    cout << "Encoded Message: ";
    L = normal.length();
    Translate(normal, L);

}
