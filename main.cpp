#include "Engine.h"

using namespace std;

int main()
{
	UEngine* Engine = new UEngine();
	// UEngine Ŭ���� ��ü 1���� �������� �����ϰ�, �� ��ü�� �ּҸ� Engine�̶�� �����Ϳ� �����Ѵ�

	Engine->Initialize();

	Engine->Run();

	return 0;
}