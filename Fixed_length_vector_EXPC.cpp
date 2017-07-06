#include "libraries.h"
template <typename T,int size>
class fixed_vector{
	
private:
	T *v_array;
public:
	typedef T* iterator;
	typedef const T* const_iterator;
	
	/*Constructors */
	/*No ned to Mentrion the Temlate over here It will take the class template */
	fixed_vector()
	{
		v_array = new T[size];
	}
	
	/*
	template <typename O,int size>
	fixed_vector(const fixed_vector<O,int>& other)
	{
		cout<<"We reached the copy Constucotrs"
	}
	
	template <typename O,int size>
	fixed_vector& operator= (const fixed_vector<O,int>& other)
	{
		cout<<"We reached the copy Constucotrs"
	}
	 * /
	
	
	
	/*Destuctors*/
	~fixed_vector()
	{
		delete [] v_array;
	}
		
	/*Utility Methods */
	iterator begin()
	{
		return v_array;
	}
	
	iterator end()
	{
		return v_array + size;
	}
	
	
	
};