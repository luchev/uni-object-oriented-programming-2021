#include <Pair.hpp>
#include <string>
#include <vector>
typedef char BYTE;
#define pairIntBool Pair<int, bool>

int main() {
    pairIntBool pair;
    Pair<std::string, BYTE> pairByte;

    pairByte.setValue('a');

    std::vector<int> vecInts;
}
