// NoStringsAttached.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <cstring> // for strcpy and strcat

class Strn
{
private:
	char st[10];

public:
	Strn()
	{ st[0] = '\0'; }

	Strn(char s[])
	{
		strcpy(st, s);
	}

	Strn concat(Strn S)
	{
		Strn temp;
		strcpy(temp.st, st);
		strcat(temp.st, S.st);
		return temp;
	}

};


int main()
{
	Strn s1("House");
	Strn s2("Boat");
	Strn s3;

	s3 = s1.concat(s2);

	system("pause");
    return 0;
}

