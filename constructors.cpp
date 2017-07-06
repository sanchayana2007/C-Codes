#include "libraries.h"


class PrimeNumbers
{
	//Stores the Prime Numbers from 0 to the Given numbers
public:
	//Member Functions 
	vector <int>PrimeArray; 
	const int PrimeRange ;
	
	/*Consturctor */	
	PrimeNumbers(int Number): PrimeRange(Number)
	{
		int temp = Number;
		bool Prime = true;
		for (int i = 2 ; i < temp ; ++i)
		{
			Prime = true;
			for (int j = 2 ; j < i ; ++j)
			{	
				
				cout<<"Prime chking Num"<<i<<"divided wd" <<j << endl;
				if ((i % j) == 0 ){
					Prime = false;
					break;
				}
			}
			
			if (Prime){
				PrimeArray.push_back(i);
				cout<<"Passed as Prime"<<i << endl;
			}
		}
	
	}
	
	PrimeNumbers(const PrimeNumbers& mem):PrimeRange(mem.PrimeRange)
	{
		PrimeArray = mem.PrimeArray;
	}
	
	
	void print_nos()
	{
		cout<< "Printing the Vecots";
		for (std::vector<int>::iterator it = PrimeArray.begin() ; it != PrimeArray.end(); ++it)
			std::cout << ' ' << *it;
			std::cout << '\n';
		}
	
	
};