#pragma once
#include <iostream>
#include <fstream>
class clsFileRegister
{
private:

public:
	static void FileRegister()
	{
		fstream Myfile;

		Myfile.open("Myfile.txt", ios::out | ios::app); //Write mode orr append mode (???? ???? ???? ??? ?????? ?? ??? ?? ????? ??? ????)

		if (Myfile.is_open())
		{
			Myfile << "This is my first file\n";
			Myfile << "Let's gooo\n";
			Myfile << "append data\n";

			Myfile.close();
		}
	}
};

