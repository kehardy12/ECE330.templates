

template <typename T>
class Sort
{
	private:

	T *_ptr;
	int _size;

	public:

Sort(){

}

Sort<T> (T * ptr, int size)
{
	_ptr = ptr;
	_size = size;
}

T &operator[](int index)
{
	if (index > _size || index < 0)
	{
		std::cout << "invalid Size" << std::endl;	
	}
	return _ptr[index];
}

void selectionSort()
{  
	int smallest; // index of smallest element

	// loop over size - 1 elements
	for ( int i = 0; i < _size - 1; ++i )
	{
		smallest = i; // first index of remaining array
		
		// loop to find index of smallest element
		for ( int index = i + 1; index < _size; ++index )
			
			if ( _ptr[index ] < _ptr[ smallest ] )
				smallest = index;
		
		swap( _ptr[ i ], _ptr[ smallest ] );
	} // end if
} // end function selectionSort
 
// swap values at memory locations to which
// element1Ptr and element2Ptr point
void swap( T &element1Ptr, T &element2Ptr )
{
	T hold = element1Ptr;
	element1Ptr = element2Ptr;
	element2Ptr = hold;
} // end function swap
};
