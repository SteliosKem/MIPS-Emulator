#include "MipsEmulator.h"
#include "CPU.h"

using namespace std;

int main()
{
	CPU cpu{};
	cpu.write_register(T0, 5008);

	cout << cpu.read_register(T0) << endl;
	return 0;
}
