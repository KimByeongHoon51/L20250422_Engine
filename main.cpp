#include "Engine.h"

using namespace std;

int main()
{
	UEngine* Engine = new UEngine();
	// UEngine 클래스 객체 1개를 동적으로 생성하고, 그 객체의 주소를 Engine이라는 포인터에 저장한다

	Engine->Initialize();

	Engine->Run();

	return 0;
}