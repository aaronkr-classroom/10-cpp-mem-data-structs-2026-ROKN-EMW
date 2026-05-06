// wirte_args.cpp

#include <iostream>

using namespace std;

// C++ 파일을 실행할 수 있는 과정:
// wirte_args.cpp -> 전처리 -> 컴파일 -> 오브젝트(wirte_args.obj, .o) -> 링킹 -> 실행파일(wirte_args.exe / a.out)

// 터미널에서 실행한다면:
// >>> ./wirte_args.exe say hello world
//		argc = 4
//		argv = ["say", "hello", "world"]
//		>>> say hello world

int main(int argc, char** argv)
{// 명령 프롬포트에 입력한 인수가 존재하면 출력
	if (argc > 1)
	{
		cout << "실행 파일: " << argv[0] << endl;
		cout << "인수들: " << endl;
		for (int i = 0; i < argc; i++)
		{// 첫 번째 인수를 출력 공백 하나와 함께 나머지 인수들을 각각 출력
			cout << argv[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
