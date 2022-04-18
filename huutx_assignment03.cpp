#include <iostream>
using namespace std;

bool checkYear(int year) // kiem tra nam nhuan
{ 
    if (year % 400==0) 
        return true; 
    if (year % 4==0 && year % 100 != 0) 
        return true;
    return false; 
}
bool checkday(int dd)   // kiem tra so ngay trong khoang tu 1->31 
{
	if(dd < 0 || dd >32)
		return false;
	return true;
}
bool checkmonth(int mm)  // kiem tra so thang trong khoang tu 1->12
{
	if(mm < 0 || mm >12)
		return false;
	return true;
}

int option1(int mm, int year)  // tinh so ngay trong thang 
{
	int songay = 0;
	switch(mm)
	{
		case 1:
		{
			songay = 31;
			break;
		}
		case 2:
		{
			if(checkYear(year) == true)
				songay = 29;
			else
				songay = 28;
			break;
		}
		case 3:
		{
			cout << 31;
			break;
		}
		case 4:
		{
			songay =  30;
			break;
		}
		case 5:
		{
			songay =  31;
			break;
		}
		case 6:
		{
			songay =  30;
			break;
		}
		case 7:
		{
			songay =  31;
			break;
		}
		case 8:
		{
			songay =  30;
			break;
		}
		case 9:
		{
			songay =  31;
			break;
		}
		case 10:
		{
			songay = 30;
			break;
		}
		case 11:
		{
			songay =  31;
			break;
		}
		case 12:
		{
			songay = 30;
			break;
		}
	}
	return songay;
}

void option2(int dd, int mm, int yyyy)
{
	if(dd == option1(mm,yyyy))
	{
		if(mm == 12)
		{
			dd = 1; mm = 1; yyyy++;	
		}	
		else
		{
			dd = 1; mm++;
		}
	}
	else 
		dd++;
	cout << "Ngay tiep theo la: " << dd << "/" << mm << "/" << yyyy << "\n";	
}

void option3(int dd, int mm, int yyyy)
{
	if(dd == 1)
	{
		if(mm == 1)
		{
			mm = 12; 
			dd = option1(mm,yyyy); 
			yyyy--;	
		}	
		else
		{
			dd = option1(mm,yyyy); 
			mm--;
		}
	}
	else 
		dd--;
	cout << "Ngay hom truoc la: " << dd << "/" << mm << "/" << yyyy << "\n";	
}

int main()
{
	bool checkall = true;
	while(checkall!=false)
	{
	int dd,mm,yyyy;
	cout << "Input dd/mm/yyyy\n";
	
	int tg=100;		
	while(tg>0)		// nhap ngay 
	{
	cout << "date: "; cin >> dd;
	if(checkday(dd) == false)
		cout << "So ngay nhap sai nhap lai!" << "\n";
	else
		break;
	tg--;
	}
	
	tg=100;
	while(tg>0)		// nhap thang
	{
	cout << "month: "; cin >> mm;
	if(checkmonth(mm) == false)
		cout << "So thang nhap sai nhap lai!" << "\n";
	else
		break;
	tg--;
	}
	
	cout << "year: "; cin >> yyyy; // nhap nam
	
	bool check = true;
	while(check!=false)
	{
	cout << "\n";
	cout << "============Menu=============\n";
	cout << "1. Find the number of month \n";
	cout << "2. Show next day \n";
	cout << "3. Show previous day\n";
	cout << "4. Check another dd/mm/yyyy\n";
	cout << "5. End\n";
	int opt; 
	cout << "Nhap lua chon: ";
	cin >> opt; cout <<"\n";
	if(opt == 1)
	{
		cout << "So ngay trong thang "<< mm << " la: ";
		cout << option1(mm,yyyy) <<"\n";
	}
	else if(opt == 2)
		option2(dd,mm,yyyy);
	else if(opt == 3)
		option3(dd,mm,yyyy);
	else if(opt == 4)
		break;
	else if(opt == 5)
	{
		cout << "End";
		checkall = false; 
		break;
	}
	else
		cout << "Nhap sai, nhap lai!\n";
	}
}
}
