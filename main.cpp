#include "Istream_overloading.cpp"
#include "constructors.cpp"
#include "Fixed_length_vector_EXPC.cpp"


void Istrem_overloading()
{
	Distance D1(11, 10), D2(5, 11), D3;
	cout << "Enter the value of object : " << endl;
	cin >> D3;
	cout << "First Distance : " << D1 << endl;
	cout << "Second Distance :" << D2 << endl;
	cout << "Third Distance :" << D3 << endl;
}
 
void Constrcuctors_check()
{
		PrimeNumbers D1(8);
		D1.print_nos();
		
		/*Copy constructors Checks */
		PrimeNumbers D2(12);
		PrimeNumbers D3(D2);
		D3.print_nos();
}


void Fixed_vecotor_check()
{
	fixed_vector<int,4> a;
	fixed_vector<int,6> b(a);
	
	
	
	
}



int main(int argc, char **argv)
{
	//Istrem_overloading();
	//Constrcuctors_check();
	Fixed_vecotor_check();
	return 0;
}
