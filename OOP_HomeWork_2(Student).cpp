#include "Student.h"
#include "Group.h"

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	srand(time(0));
	
	/*Student A;
	A.Show_student();
	A += 3;
	A.Show_student();

	Student C;
	C.Show_student();
	Student D;
	D.Show_student();
	cout << endl;
	bool result = C < D;
	cout << boolalpha << result << endl;

	Student Igor("Плахотнюк", "Игорь", "Витальевич");
	Igor.Show_student();
	Igor.Set_name("Vasya");
	Igor.Show_student();*/

	/*Group A(5);
	Group B(55);
	bool result = A != B;
	cout << boolalpha << result << endl;
	bool result_2 = A > B;
	cout << boolalpha << result_2 << endl;*/

	/*Group A(5);
	A.Show_group();
	Student B("Plah", "Igor", "Vitaliyevich");
	A += B;
	A.Show_group();*/

	/*Group A(10);
	A.Show_group();
	A.Dismiss_for_exam();
	A.Show_group();
	A.Dismiss_for_credits();
	A.Show_group();*/

	Group A(0);
	A.Show_group();
	Group B(3);
	B.Show_group();
	Group C(2);
	C.Show_group();
	A.Merge_groups(B, C);
	A.Show_group();



	return 0;
}