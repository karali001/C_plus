// Image_Process1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <math.h>

//User defined includes
#include "imge_bmp.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	LPCTSTR input, output;
	int Width, Height;
	long Size, new_size;

	cout << "Haydi Bismillah" << endl;
	input = L"D://Read_Image//Read_Image//img_hmw_1.bmp";
	
	BYTE* buffer = LoadBMP(&Width, &Height, &Size, input);
	BYTE* raw_intensity = ConvertBMPToIntensity(buffer, Width, Height);
		
	char ch;
	cout << "Sonucu diske kaydetsin mi? E/H:"; cin >> ch;
	if ((ch == 'E') || (ch == 'e')) {

		BYTE* display_imge = ConvertIntensityToBMP(raw_intensity, Width, Height, &new_size);
		output = L"D://Read_Image//Read_Image//img_hmw_2";
		if (SaveBMP(display_imge, Width, Height, new_size, output))
			cout << " Output Image was successfully saved" << endl;
		else cout << "Error on saving image" << endl;
		delete[] display_imge;
	}//


	delete[] buffer;
	delete[] raw_intensity;
	
	return 0;
}







